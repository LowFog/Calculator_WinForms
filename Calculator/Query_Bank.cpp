#define CURL_STATICLIB
#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

static size_t getResponsetoString(void* contents, size_t size, size_t nmemb, void* userp) {
	((string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

string query_bank() {
	CURL* curl;
	CURLcode response;
	string str_response;
	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, "https://api.nbrb.by/exrates/rates?periodicity=0");
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, getResponsetoString);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &str_response);
	response = curl_easy_perform(curl);
	curl_easy_cleanup(curl);

	return str_response;
}