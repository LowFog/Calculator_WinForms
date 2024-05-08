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
	/// —водка дл€ MyForm_SysSch
	/// </summary>
	public ref class MyForm_SysSch : public System::Windows::Forms::Form
	{
	public:
		MyForm_SysSch(void)
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
			 String^ res, ^ res1, ^ res2, ^ res3;
			 String^ rev_str;
			 int res_oct, ans_oct, total, result,total_res_binhex;// в первой переменной число при делении, а во второй переменной остаток, в третьей число при умножении
			 long int size_res;
			 
			 int pow_a;
			 int pow_a_two;
			 int number;
			 int pow_eight;
			 int length_zero = 0;


	private: System::Windows::Forms::Label^ choice_in;
	private: System::Windows::Forms::Button^ button_result;
	private: System::Windows::Forms::Button^ button_close;







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
			this->button_close = (gcnew System::Windows::Forms::Button());
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
			this->user_in->Location = System::Drawing::Point(13, 50);
			this->user_in->Name = L"user_in";
			this->user_in->Size = System::Drawing::Size(100, 22);
			this->user_in->TabIndex = 8;
			// 
			// button_change
			// 
			this->button_change->Location = System::Drawing::Point(261, 50);
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
			this->choice_in->Location = System::Drawing::Point(154, 55);
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
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::Red;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Location = System::Drawing::Point(314, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(25, 25);
			this->button_close->TabIndex = 16;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm_SysSch::button_close_Click);
			// 
			// MyForm_SysSch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(351, 348);
			this->Controls->Add(this->button_close);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm_SysSch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ѕрограммист";
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
	private: System::Void converter_bod(String^ num_str,long int num, String^ name_before, String^ name_after) {

		long int start = num;   //{ System::Convert::ToInt32(this->user_in->Text)};//System::Convert::ToString(num);
		long int start1 = num;
		int hex_arr[100];
		int arr = num;
		int pow_l = 0;
		int str[100]; // массив

		String^  str_NotArr = this->user_in->Text;
		String^ arr_str = System::Convert::ToString(arr);
		
		const int length = this->user_in->Text->Length;//str_NotArr->Length;
		int length_dup = length;

		for (int i = 0; i < length; i++) { // число запихиваем в массив
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
		else if (name_before == "OCT") { //---------------
			if (name_after == "BIN") {
				int a = num;
				for (int i = 0; length_zero < length; i++) {
					pow_a = pow(10, 1 + i);
					pow_a_two = pow(10, i);
					number = start % pow_a / pow_a_two;
					pow_eight = pow(8, length_zero);
					total = number * pow_eight;  
					result += total;
					length_zero++;
				}
				res = System::Convert::ToString(result,2);
			}
			else if (name_after == "DEC") {
				int a = num;
				for (int i = 0; length_zero < length; i++) {
					pow_a = pow(10, 1 + i);
					pow_a_two = pow(10, i);
					number = start % pow_a / pow_a_two;
					pow_eight = pow(8, length_zero);
					total = number * pow_eight; 
					result += total;
					length_zero++;
				}
			}
			else if (name_after == "HEX") {
				for (int i = 0; length_zero < length; i++) {
					pow_a = pow(10, 1 + i);
					pow_a_two = pow(10, i);
					number = start % pow_a / pow_a_two;
					pow_eight = pow(8, length_zero);
					total = number * pow_eight; // доработать 
					result += total;
					length_zero++;
				}
				res1 = System::Convert::ToString(result,16);
			}
		}
		else if (name_before == "BIN") {
			String^ bin_num_inbin = nullptr;
			bin_num_inbin = this->user_in->Text;
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
				total_res_binhex = System::Convert::ToInt32(bin_num_inbin, 2); // преобразование бина в хекс
				res3 = System::Convert::ToString(total_res_binhex,16);
				/*for (int i = 0; i < num_str->Length; i++) { 
					if (num_str[i] == 'A')
						hex_arr[i] == 10;
					else if (num_str[i] == 'B') 
						hex_arr[i] == 11;
					else if (num_str[i] == 'C')
						hex_arr[i] = 12;
					else if (num_str[i] == 'D')
						hex_arr[i] = 13;
					else if (num_str[i] == 'E')
						hex_arr[i] = 14;
					else if (num_str[i] == 'F')
						hex_arr[i] = 15;
					else
						hex_arr[i] = 
				}*/
			}
		}
		else if (name_before == "HEX") {
			int str_to_int;
			if (name_after == "DEC") {
				int a;
				for (int i = 0; i < length; i++) {
					if (num_str[i] == 'a')
						result += 10 * pow(16, length - 1 - i);
					else if (num_str[i] == 'b')
						result += 11 * pow(16, length - 1 - i);
					else if (num_str[i] == 'c')
						result += 12 * pow(16, length - 1 - i);
					else if (num_str[i] == 'd')
						result += 13 * pow(16, length - 1 - i);
					else if (num_str[i] == 'e')
						result += 14 * pow(16, length - 1 - i);
					else if (num_str[i] == 'f')
						result += 15 * pow(16, length - 1 - i);
					else {
						a = (int) num_str[i];
						result += a * pow(16, length - 1 - i);
					}
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

	private: Void converter_h(String^ num_str,String^ name_after) {
		int hex_arr[100];
		int pow_l = 0;
		int str[100]; // массив

		String^ str_NotArr = this->user_in->Text;
		//String^ arr_str = System::Convert::ToString(arr);

		const int length = this->user_in->Text->Length;//str_NotArr->Length;
		int length_dup = length;

		//else if (name_before == "HEX") {
		int str_to_int;
		int a;
		int res_h;
		if (name_after == "DEC") {
			for (int i = 0; i < length; i++) {
				if (num_str[i] == 'a')
					res_h += 10 * pow(16, length - 1 - i);
				else if (num_str[i] == 'b')
					res_h += 11 * pow(16, length - 1 - i);
				else if (num_str[i] == 'c')
					res_h += 12 * pow(16, length - 1 - i);
				else if (num_str[i] == 'd')
					res_h += 13 * pow(16, length - 1 - i);
				else if (num_str[i] == 'e')
					res_h += 14 * pow(16, length - 1 - i);
				else if (num_str[i] == 'f')
					res_h += 15 * pow(16, length - 1 - i);
				else {
					a = (int)num_str[i];
					res_h += a * pow(16, length - 1 - i);
				}
			}
			result = res_h;
		}
		else if (name_after == "BIN") {
			for (int i = 0; i < length; i++) {
				if (num_str[i] == 'a')
					res_h += 10 * pow(16, length - 1 - i);
				else if (num_str[i] == 'b')
					res_h += 11 * pow(16, length - 1 - i);
				else if (num_str[i] == 'c')
					res_h += 12 * pow(16, length - 1 - i);
				else if (num_str[i] == 'd')
					res_h += 13 * pow(16, length - 1 - i);
				else if (num_str[i] == 'e')
					res_h += 14 * pow(16, length - 1 - i);
				else if (num_str[i] == 'f')
					res_h += 15 * pow(16, length - 1 - i);
				else {
					a = (int)num_str[i];
					res_h += a * pow(16, length - 1 - i);
				}
			}
			res = System::Convert::ToString(res_h,2);

		}
		else if (name_after == "OCT") {
			for (int i = 0; i < length; i++) {
				if (num_str[i] == 'a')
					res_h += 10 * pow(16, length - 1 - i);
				else if (num_str[i] == 'b')
					res_h += 11 * pow(16, length - 1 - i);
				else if (num_str[i] == 'c')
					res_h += 12 * pow(16, length - 1 - i);
				else if (num_str[i] == 'd')
					res_h += 13 * pow(16, length - 1 - i);
				else if (num_str[i] == 'e')
					res_h += 14 * pow(16, length - 1 - i);
				else if (num_str[i] == 'f')
					res_h += 15 * pow(16, length - 1 - i);
				else {
					a = (int)num_str[i];
					res_h += a * pow(16, length - 1 - i);
				}
			}
			res1 = System::Convert::ToString(res_h, 8);
			
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

			converter_bod(this->user_in->Text,size_res, "BIN", "OCT");//rev_str
			
			this->label_oct_out->Text = reverse_str(res1);//rev_str; 
			res1 = "";
			
			converter_bod(this->user_in->Text,size_res, "BIN", "HEX");//res3
			this->label_hex_out->Text = res3;
			res3 = "";

			total = System::Convert::ToInt32(bin_num, 2);
			String^ total_str = System::Convert::ToString(total);
			this->label_dec_out->Text = total_str;

			/*total1 = System::Convert::ToInt32(total_str, 16);
			this->label_hex_out->Text = System::Convert::ToString(total1);
			total = System::Convert::ToInt32(decimal, 8);
			this->label_oct_out->Text = System::Convert::ToString(total);*/
		}
		else if (this->choice_in->Text == "OCT") {
			size_res = System::Convert::ToInt64(this->user_in->Text);
			this->label_oct_out->Text = System::Convert::ToString(size_res);
			converter_bod(this->user_in->Text, size_res, "OCT", "DEC");//result;
			this->label_dec_out->Text = System::Convert::ToString(result);
			//result = 0;
			converter_bod(this->user_in->Text, size_res, "OCT", "BIN");//res
			this->label_bin_out->Text = res;
			converter_bod(this->user_in->Text, size_res, "OCT", "HEX");//res1
			this->label_hex_out->Text = res1;
		}
		else if (this->choice_in->Text == "DEC") {
			size_res = System::Convert::ToInt64(this->user_in->Text);
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
			this->label_hex_out->Text = this->user_in->Text;
			converter_h(this->user_in->Text,"DEC");//result
			this->label_dec_out->Text = System::Convert::ToString(result);
			converter_h(this->user_in->Text,"OCT");//res1
			this->label_oct_out->Text = res1;
			converter_h(this->user_in->Text,"BIN");//res
			this->label_bin_out->Text = res;
		}
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Hide();
	}
};
}
