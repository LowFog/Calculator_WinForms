#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include<array>
#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm_SysSch
	/// </summary>
	public ref class MyForm_SysSch : public System::Windows::Forms::Form
	{
	public:
		MyForm_SysSch(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm_SysSch()
		{
			if (components)
			{
				delete components;
			}
		}




	protected:

	protected:



	private: System::Windows::Forms::Label^ label_bin;
	private: System::Windows::Forms::Label^ label_oct;
	private: System::Windows::Forms::Label^ label_dec;

	private: System::Windows::Forms::Label^ label_hex;
	private: System::Windows::Forms::TextBox^ user_in;
	private: System::Windows::Forms::Button^ button_change;
	private: System::Windows::Forms::Label^ label_bin_out;
	private: System::Windows::Forms::Label^ label_oct_out;
	private: System::Windows::Forms::Label^ label_dec_out;
	private: System::Windows::Forms::Label^ label_hex_out;


	private: int convert_in_out = 0;
			 int convert_out_in = 0;
			 String^ res, ^ res1, ^ res2;
			 String^ rev_str;
			 int res_oct, ans_oct, total, result;// � ������ ���������� ����� ��� �������, � �� ������ ���������� �������, � ������� ����� ��� ���������
			 long int size_res;


	private: System::Windows::Forms::Label^ choice_in;
	private: System::Windows::Forms::Button^ button_result;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_bin = (gcnew System::Windows::Forms::Label());
			this->label_oct = (gcnew System::Windows::Forms::Label());
			this->label_dec = (gcnew System::Windows::Forms::Label());
			this->label_hex = (gcnew System::Windows::Forms::Label());
			this->user_in = (gcnew System::Windows::Forms::TextBox());
			this->button_change = (gcnew System::Windows::Forms::Button());
			this->label_bin_out = (gcnew System::Windows::Forms::Label());
			this->label_oct_out = (gcnew System::Windows::Forms::Label());
			this->label_dec_out = (gcnew System::Windows::Forms::Label());
			this->label_hex_out = (gcnew System::Windows::Forms::Label());
			this->choice_in = (gcnew System::Windows::Forms::Label());
			this->button_result = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_bin
			// 
			this->label_bin->AutoSize = true;
			this->label_bin->Location = System::Drawing::Point(138, 101);
			this->label_bin->Name = L"label_bin";
			this->label_bin->Size = System::Drawing::Size(29, 16);
			this->label_bin->TabIndex = 4;
			this->label_bin->Text = L"BIN";
			// 
			// label_oct
			// 
			this->label_oct->AutoSize = true;
			this->label_oct->Location = System::Drawing::Point(138, 129);
			this->label_oct->Name = L"label_oct";
			this->label_oct->Size = System::Drawing::Size(35, 16);
			this->label_oct->TabIndex = 5;
			this->label_oct->Text = L"OCT";
			// 
			// label_dec
			// 
			this->label_dec->AutoSize = true;
			this->label_dec->Location = System::Drawing::Point(141, 158);
			this->label_dec->Name = L"label_dec";
			this->label_dec->Size = System::Drawing::Size(35, 16);
			this->label_dec->TabIndex = 6;
			this->label_dec->Text = L"DEC";
			// 
			// label_hex
			// 
			this->label_hex->AutoSize = true;
			this->label_hex->Location = System::Drawing::Point(141, 187);
			this->label_hex->Name = L"label_hex";
			this->label_hex->Size = System::Drawing::Size(34, 16);
			this->label_hex->TabIndex = 7;
			this->label_hex->Text = L"HEX";
			// 
			// user_in
			// 
			this->user_in->Location = System::Drawing::Point(13, 36);
			this->user_in->Name = L"user_in";
			this->user_in->Size = System::Drawing::Size(100, 22);
			this->user_in->TabIndex = 8;
			// 
			// button_change
			// 
			this->button_change->Location = System::Drawing::Point(261, 34);
			this->button_change->Name = L"button_change";
			this->button_change->Size = System::Drawing::Size(75, 23);
			this->button_change->TabIndex = 9;
			this->button_change->Text = L"change";
			this->button_change->UseVisualStyleBackColor = true;
			this->button_change->Click += gcnew System::EventHandler(this, &MyForm_SysSch::button_change_Click);
			// 
			// label_bin_out
			// 
			this->label_bin_out->AutoSize = true;
			this->label_bin_out->Location = System::Drawing::Point(10, 101);
			this->label_bin_out->Name = L"label_bin_out";
			this->label_bin_out->Size = System::Drawing::Size(0, 16);
			this->label_bin_out->TabIndex = 10;
			// 
			// label_oct_out
			// 
			this->label_oct_out->AutoSize = true;
			this->label_oct_out->Location = System::Drawing::Point(10, 129);
			this->label_oct_out->Name = L"label_oct_out";
			this->label_oct_out->Size = System::Drawing::Size(0, 16);
			this->label_oct_out->TabIndex = 11;
			// 
			// label_dec_out
			// 
			this->label_dec_out->AutoSize = true;
			this->label_dec_out->Location = System::Drawing::Point(10, 158);
			this->label_dec_out->Name = L"label_dec_out";
			this->label_dec_out->Size = System::Drawing::Size(0, 16);
			this->label_dec_out->TabIndex = 12;
			// 
			// label_hex_out
			// 
			this->label_hex_out->AutoSize = true;
			this->label_hex_out->Location = System::Drawing::Point(10, 187);
			this->label_hex_out->Name = L"label_hex_out";
			this->label_hex_out->Size = System::Drawing::Size(0, 16);
			this->label_hex_out->TabIndex = 13;
			// 
			// choice_in
			// 
			this->choice_in->AutoSize = true;
			this->choice_in->Location = System::Drawing::Point(154, 41);
			this->choice_in->Name = L"choice_in";
			this->choice_in->Size = System::Drawing::Size(0, 16);
			this->choice_in->TabIndex = 14;
			// 
			// button_result
			// 
			this->button_result->Location = System::Drawing::Point(127, 273);
			this->button_result->Name = L"button_result";
			this->button_result->Size = System::Drawing::Size(75, 23);
			this->button_result->TabIndex = 15;
			this->button_result->Text = L"result";
			this->button_result->UseVisualStyleBackColor = true;
			this->button_result->Click += gcnew System::EventHandler(this, &MyForm_SysSch::converter_size);
			// 
			// MyForm_SysSch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(351, 348);
			this->Controls->Add(this->button_result);
			this->Controls->Add(this->choice_in);
			this->Controls->Add(this->label_hex_out);
			this->Controls->Add(this->label_dec_out);
			this->Controls->Add(this->label_oct_out);
			this->Controls->Add(this->label_bin_out);
			this->Controls->Add(this->button_change);
			this->Controls->Add(this->user_in);
			this->Controls->Add(this->label_hex);
			this->Controls->Add(this->label_dec);
			this->Controls->Add(this->label_oct);
			this->Controls->Add(this->label_bin);
			this->Name = L"MyForm_SysSch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_change_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convert_in_out == 0) {
			this->choice_in->Text = "BIN";
			convert_in_out++;
		}
		else if (convert_in_out == 1) {
			this->choice_in->Text = "OCT";
			convert_in_out++;
		}
		else if (convert_in_out == 2) {
			this->choice_in->Text = "DEC";
			convert_in_out++;
		}
		else if (convert_in_out == 3) {
			this->choice_in->Text = "HEX";
			convert_in_out++;
		}
		if (convert_in_out > 3) {
			convert_in_out = 0;
		}
	}
	private: System::Void converter_bodh(String^ num_str,long int num, String^ name_before, String^ name_after) {

		long int start = num;   //{ System::Convert::ToInt32(this->user_in->Text)};//System::Convert::ToString(num);
		long int start1 = num;
		int arr = num;
		int pow_l = 0;
		int str[100]; // ������

		String^  str_NotArr = this->user_in->Text;
		String^ arr_str = System::Convert::ToString(arr);
		
		const int length = str_NotArr->Length;
		int length_dup = length;

		for (int i = 0; i < length; i++) { // ����� ���������� � ������
			int arr_str_l = arr_str->Length;
			if (arr_str_l != length_dup) {
				str[i] = 0;
				length_dup--;
				continue;
			}
			pow_l = pow(10, length_dup-1);
			int count = arr / pow_l;
			str[i] = count;
			arr %= pow_l;
			arr_str = System::Convert::ToString(arr);
			length_dup--;
		}

		if (name_before == "DEC") {
			if (name_after == "BIN") {
				for (int i = 0; start != 0; i++) {
					start /= 2;
					if (start % 2 == 0)
						res += "0";
					else if (start % 2 != 0)
						res += "1";
				}
			}
			else if (name_after == "OCT") {
				for (int i = 0; start != 0; i++) {
					ans_oct = start % 8;
					start /= 8;
					res1 += System::Convert::ToString(ans_oct);
				}
			}
			else if (name_after == "HEX") {
				for (int i = 0; start != 0; i++) {
					ans_oct = start % 16;
					start /= 16;
					res1 += System::Convert::ToString(ans_oct);
				}
			}
		}
		else if (name_before == "OCT") {
			if (name_after == "BIN") {
				for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(8, length - i);
					result += total;
					start = start / (10 * length - i);
				}
				for (int i = 0; result != 0; i++) {
					result /= 2;
					if (result % 2 == 0)
						res = "0";
					else if (result % 2 != 0)
						res = "1";
				}
			}
			else if (name_after == "DEC") {
				for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(8, length - i);
					result += total;
					start = start / (10 * length - i);
				}
			}
			else if (name_after == "HEX") {
				for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(8, length - i);
					result += total;
					start = start / (10 * length - i);
				}
				for (int i = 0; result != 0; i++) {
					ans_oct = result % 16;
					result /= 16;
					res1 += System::Convert::ToString(ans_oct);
				}
			}
		}
		else if (name_before == "BIN") { //-----------------
			//if (name_after == "DEC") {
			//	for (unsigned int i = 0; start != 0; i++) {
			//		String^ str1 = "hello";
			//		char h = str1[0];
			//		char z = str[0];
			//		int y = pow(2, length - i);
			//		String^ w = str;
			//		total = z * y;//str[i] * pow(2, length - i);
			//		result += total;
			//		start = start / (10 * length - i);
			//		
			//	}
			if (name_after == "OCT") {
				//for (int i = 0; start != 0; i++) {
				//	int z = str[0];
				//	total = str[i] * pow(2, (length - 1) - i); //System::Convert::ToInt64(str[i] * pow(2, length - i);
				//	result += total;
				//	start = start / (10 * ((length-1) - i));
				//}
				result = System::Convert::ToInt32(this->user_in->Text, 2);
				for (int i = 0; result != 0; i++) {
					ans_oct = result % 8;
					result /= 8;
					res1 += System::Convert::ToString(ans_oct);
				}

			}
			else if (name_after == "HEX") {
				for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(2, length - i);
					result += total;
					start = start / (10 * length - i);
				}
				for (int i = 0; result != 0; i++) {
					ans_oct = result % 16;
					result /= 16;
					res1 += System::Convert::ToString(ans_oct);
				}

			}
		}
		else if (name_before == "HEX") {
			int str_to_int;
			if (name_after == "DEC") {
				/*for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(16, length - i);
					result += total;
					start = start / (10 * length - i);
				}*/
				for (int i = 0; i < num_str->Length; i++) {
					char str_i = num_str[i];//(char)51;
					str_to_int = 5555;//(int)str_i;    //std::stoi(num_str[i]);
				}
			}
			else if (name_after == "BIN") {
				for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(2, length - i);
					result += total;
					start = start / (10 * length - i);
				}
				for (int i = 0; result != 0; i++) {
					result /= 2;
					if (result % 2 == 0)
						res += "0";
					else if (result % 2 != 0)
						res += "1";
				}

			}
			else if (name_after == "OCT") {
				for (int i = 0; start != 0; i++) {
					total = System::Convert::ToInt64(str[i]) * pow(16, length - i);
					result += total;
					start = start / (10 * length - i);
				}
				for (int i = 0; result != 0; i++) {
					ans_oct = result % 8;
					result /= 8;
					res1 += System::Convert::ToString(ans_oct);
				}
			}
		}
	}
	private: String^ reverse_str(String^ str) {
		auto charArr = str->ToCharArray();
		charArr->Reverse(charArr);
		return gcnew String(charArr);
	}
		   
	private: System::Void converter_size(System::Object^ sender, System::EventArgs^ e) {
		String^ bin_num = this->user_in->Text;
		int total = 0;
		int total1 = 0;
		String^ decimal = System::Convert::ToString(size_res, 2);
		if (this->choice_in->Text == "BIN") {

			size_res = System::Convert::ToInt64(this->user_in->Text);

			this->label_bin_out->Text = bin_num;                                               //BIN

			//converter_bodh(size_res, "BIN", "DEC");//result
			//this->label_dec_out->Text = System::Convert::ToString(result);

			converter_bodh(this->user_in->Text,size_res, "BIN", "OCT");//rev_str
			
			this->label_oct_out->Text = reverse_str(res1);//rev_str; 
			
			converter_bodh(this->user_in->Text,size_res, "BIN", "HEX");//res1
			this->label_hex_out->Text = res1;

			total = System::Convert::ToInt32(bin_num, 2);
			String^ total_str = System::Convert::ToString(total);
			this->label_dec_out->Text = System::Convert::ToString(total);

			/*total1 = System::Convert::ToInt32(total_str, 16);
			this->label_hex_out->Text = System::Convert::ToString(total1);
			total = System::Convert::ToInt32(decimal, 8);
			this->label_oct_out->Text = System::Convert::ToString(total);*/
		}
		else if (this->choice_in->Text == "OCT") {
			this->label_oct_out->Text = System::Convert::ToString(size_res);
			converter_bodh(this->user_in->Text, size_res, "OCT", "DEC");//result
			this->label_dec_out->Text = System::Convert::ToString(result);
			converter_bodh(this->user_in->Text, size_res, "OCT", "BIN");//res
			this->label_bin_out->Text = res;
			converter_bodh(this->user_in->Text, size_res, "OCT", "HEX");//res1
			this->label_hex_out->Text = res1;
		}
		else if (this->choice_in->Text == "DEC") {
			/*this->label_dec_out->Text = System::Convert::ToString(size_res);
			converter_bodh(size_res, "DEC", "BIN");//res
			this->label_dec_out->Text = res;
			converter_bodh(size_res, "DEC", "OCT");//res1
			this->label_oct_out->Text = res1;
			converter_bodh(size_res, "DEC", "HEX");//res1
			this->label_hex_out->Text = res1;*/
			this->label_dec_out->Text = System::Convert::ToString(size_res);
			this->label_bin_out->Text = System::Convert::ToString(size_res, 2);
			this->label_hex_out->Text = System::Convert::ToString(size_res, 16);
			this->label_oct_out->Text = System::Convert::ToString(size_res, 8);
		}
		else if (this->choice_in->Text == "HEX") {
			this->label_hex_out->Text = System::Convert::ToString(size_res);
			converter_bodh(this->user_in->Text, size_res, "HEX", "DEC");//result
			this->label_dec_out->Text = System::Convert::ToString(result);
			converter_bodh(this->user_in->Text, size_res, "HEX", "OCT");//res1
			this->label_oct_out->Text = res1;
			converter_bodh(this->user_in->Text, size_res, "HEX", "BIN");//res
			this->label_hex_out->Text = res;
		}
	}
};
}