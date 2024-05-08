//#include <boost/beast.hpp>
//#include <boost/asio/connect.hpp>
//#include <boost/asio/ip/tcp.hpp>
//#include <fstream>
#include <iostream>
//#include <string>
#include "Query_Bank.cpp"
#pragma once

//namespace http = boost::beast::http;

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm_valut
	/// </summary>
	public ref class MyForm_valut : public System::Windows::Forms::Form
	{
	public:
		MyForm_valut(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm_valut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_change;
	protected:

	private: System::Windows::Forms::Label^ change_in;
	private: System::Windows::Forms::Label^ rub_out;
	private: System::Windows::Forms::Label^ byn_out;
	private: System::Windows::Forms::Label^ usd_out;
	private: System::Windows::Forms::Label^ label_rub;
	protected:





	private: System::Windows::Forms::Label^ label_byn;

	private: System::Windows::Forms::Label^ label_usd;

	private: System::Windows::Forms::TextBox^ user_in;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_result;

	/*private: String ^host = "api.nbrb.by";
		     String^ target = "/exrates/rates[/{cur_id}]";*/

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_change = (gcnew System::Windows::Forms::Button());
			this->change_in = (gcnew System::Windows::Forms::Label());
			this->rub_out = (gcnew System::Windows::Forms::Label());
			this->byn_out = (gcnew System::Windows::Forms::Label());
			this->usd_out = (gcnew System::Windows::Forms::Label());
			this->label_rub = (gcnew System::Windows::Forms::Label());
			this->label_byn = (gcnew System::Windows::Forms::Label());
			this->label_usd = (gcnew System::Windows::Forms::Label());
			this->user_in = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_result = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_change
			// 
			this->button_change->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_change->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_change->ForeColor = System::Drawing::Color::White;
			this->button_change->Location = System::Drawing::Point(257, 65);
			this->button_change->Name = L"button_change";
			this->button_change->Size = System::Drawing::Size(75, 23);
			this->button_change->TabIndex = 0;
			this->button_change->Text = L"Change";
			this->button_change->UseVisualStyleBackColor = false;
			// 
			// change_in
			// 
			this->change_in->AutoSize = true;
			this->change_in->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->change_in->Location = System::Drawing::Point(161, 72);
			this->change_in->Name = L"change_in";
			this->change_in->Size = System::Drawing::Size(2, 18);
			this->change_in->TabIndex = 1;
			// 
			// rub_out
			// 
			this->rub_out->AutoSize = true;
			this->rub_out->Location = System::Drawing::Point(44, 154);
			this->rub_out->Name = L"rub_out";
			this->rub_out->Size = System::Drawing::Size(0, 16);
			this->rub_out->TabIndex = 2;
			// 
			// byn_out
			// 
			this->byn_out->AutoSize = true;
			this->byn_out->Location = System::Drawing::Point(44, 190);
			this->byn_out->Name = L"byn_out";
			this->byn_out->Size = System::Drawing::Size(0, 16);
			this->byn_out->TabIndex = 3;
			// 
			// usd_out
			// 
			this->usd_out->AutoSize = true;
			this->usd_out->Location = System::Drawing::Point(44, 226);
			this->usd_out->Name = L"usd_out";
			this->usd_out->Size = System::Drawing::Size(0, 16);
			this->usd_out->TabIndex = 4;
			// 
			// label_rub
			// 
			this->label_rub->AutoSize = true;
			this->label_rub->Location = System::Drawing::Point(288, 154);
			this->label_rub->Name = L"label_rub";
			this->label_rub->Size = System::Drawing::Size(36, 16);
			this->label_rub->TabIndex = 5;
			this->label_rub->Text = L"RUB";
			// 
			// label_byn
			// 
			this->label_byn->AutoSize = true;
			this->label_byn->Location = System::Drawing::Point(288, 190);
			this->label_byn->Name = L"label_byn";
			this->label_byn->Size = System::Drawing::Size(35, 16);
			this->label_byn->TabIndex = 6;
			this->label_byn->Text = L"BYN";
			// 
			// label_usd
			// 
			this->label_usd->AutoSize = true;
			this->label_usd->Location = System::Drawing::Point(288, 226);
			this->label_usd->Name = L"label_usd";
			this->label_usd->Size = System::Drawing::Size(36, 16);
			this->label_usd->TabIndex = 7;
			this->label_usd->Text = L"USD";
			// 
			// user_in
			// 
			this->user_in->Location = System::Drawing::Point(28, 70);
			this->user_in->Name = L"user_in";
			this->user_in->Size = System::Drawing::Size(100, 22);
			this->user_in->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(334, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 25);
			this->button1->TabIndex = 9;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_valut::button1_Click);
			// 
			// button_result
			// 
			this->button_result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_result->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_result->ForeColor = System::Drawing::Color::White;
			this->button_result->Location = System::Drawing::Point(152, 337);
			this->button_result->Name = L"button_result";
			this->button_result->Size = System::Drawing::Size(75, 23);
			this->button_result->TabIndex = 10;
			this->button_result->Text = L"result";
			this->button_result->UseVisualStyleBackColor = false;
			this->button_result->Click += gcnew System::EventHandler(this, &MyForm_valut::converter_cur);
			// 
			// MyForm_valut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(371, 412);
			this->Controls->Add(this->button_result);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->user_in);
			this->Controls->Add(this->label_usd);
			this->Controls->Add(this->label_byn);
			this->Controls->Add(this->label_rub);
			this->Controls->Add(this->usd_out);
			this->Controls->Add(this->byn_out);
			this->Controls->Add(this->rub_out);
			this->Controls->Add(this->change_in);
			this->Controls->Add(this->button_change);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm_valut";
			this->Text = L"¬алюта";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Hide();
	}
	
	private: Void converter_cur(System::Object^ sender, System::EventArgs^ e) {

		query_bank();

	}
};
}
