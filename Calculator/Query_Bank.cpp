#pragma managed(push,off)
#include <boost/beast.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <iostream>
#include <fstream>
#include <string>
#pragma managed(pop)

namespace http = boost::beast::http;

using namespace std;

//string host = "api.nbrb.by";
//string target = "/exrates/rates/456?ondate=2023-01-10";

void query_bank() {
	
	string host = "api.nbrb.by";
	string target = "/exrates/rates/456?ondate=2023-01-10";
	
	boost::asio::io_context ioc;

	boost::asio::ip::tcp::resolver resolver(ioc);
	boost::asio::ip::tcp::socket socket(ioc);

	boost::asio::connect(socket, resolver.resolve(host, "80"));

	http::request<http::string_body> req(http::verb::get, target, 11);

	req.set(http::field::host, host);
	req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);

	http::write(socket, req);

	{
		boost::beast::flat_buffer buffer;
		http::response<http::dynamic_body> res;
		http::read(socket, buffer, res);

		ofstream out("result_cur.txt");

		if (out.is_open()) {
			out << res;
			out.close();
		}
	}
}