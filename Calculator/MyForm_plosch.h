#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm_plosch
	/// </summary>
	public ref class MyForm_plosch : public System::Windows::Forms::Form
	{
	public:
		MyForm_plosch(void)
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
		~MyForm_plosch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ change_in;
	private: System::Windows::Forms::Button^ change_out;
	private: System::Windows::Forms::Label^ choice_in;
	private: System::Windows::Forms::Label^ choice_out;
	private: System::Windows::Forms::Label^ convert_out;
	protected:

	protected:





	private: System::Windows::Forms::TextBox^ user_in;

	private: int convert_in_out = 0;
	private: int convert_out_in = 0;
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
			this->change_in = (gcnew System::Windows::Forms::Button());
			this->change_out = (gcnew System::Windows::Forms::Button());
			this->choice_in = (gcnew System::Windows::Forms::Label());
			this->choice_out = (gcnew System::Windows::Forms::Label());
			this->convert_out = (gcnew System::Windows::Forms::Label());
			this->user_in = (gcnew System::Windows::Forms::TextBox());
			this->button_result = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// change_in
			// 
			this->change_in->Location = System::Drawing::Point(269, 130);
			this->change_in->Name = L"change_in";
			this->change_in->Size = System::Drawing::Size(75, 23);
			this->change_in->TabIndex = 0;
			this->change_in->Text = L"change";
			this->change_in->UseVisualStyleBackColor = true;
			this->change_in->Click += gcnew System::EventHandler(this, &MyForm_plosch::change_in_Click);
			// 
			// change_out
			// 
			this->change_out->Location = System::Drawing::Point(269, 197);
			this->change_out->Name = L"change_out";
			this->change_out->Size = System::Drawing::Size(75, 23);
			this->change_out->TabIndex = 1;
			this->change_out->Text = L"change";
			this->change_out->UseVisualStyleBackColor = true;
			this->change_out->Click += gcnew System::EventHandler(this, &MyForm_plosch::change_out_Click);
			// 
			// choice_in
			// 
			this->choice_in->AutoSize = true;
			this->choice_in->Location = System::Drawing::Point(185, 130);
			this->choice_in->Name = L"choice_in";
			this->choice_in->Size = System::Drawing::Size(0, 16);
			this->choice_in->TabIndex = 2;
			// 
			// choice_out
			// 
			this->choice_out->AutoSize = true;
			this->choice_out->Location = System::Drawing::Point(185, 203);
			this->choice_out->Name = L"choice_out";
			this->choice_out->Size = System::Drawing::Size(0, 16);
			this->choice_out->TabIndex = 3;
			// 
			// convert_out
			// 
			this->convert_out->AutoSize = true;
			this->convert_out->Location = System::Drawing::Point(40, 203);
			this->convert_out->Name = L"convert_out";
			this->convert_out->Size = System::Drawing::Size(0, 16);
			this->convert_out->TabIndex = 4;
			// 
			// user_in
			// 
			this->user_in->Location = System::Drawing::Point(43, 130);
			this->user_in->Name = L"user_in";
			this->user_in->Size = System::Drawing::Size(100, 22);
			this->user_in->TabIndex = 5;
			// 
			// button_result
			// 
			this->button_result->Location = System::Drawing::Point(138, 264);
			this->button_result->Name = L"button_result";
			this->button_result->Size = System::Drawing::Size(75, 23);
			this->button_result->TabIndex = 6;
			this->button_result->Text = L"result";
			this->button_result->UseVisualStyleBackColor = true;
			this->button_result->Click += gcnew System::EventHandler(this, &MyForm_plosch::converter_plosch);
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::Red;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Location = System::Drawing::Point(320, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(25, 25);
			this->button_close->TabIndex = 10;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm_plosch::button_close_Click);
			// 
			// MyForm_plosch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(357, 359);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button_result);
			this->Controls->Add(this->user_in);
			this->Controls->Add(this->convert_out);
			this->Controls->Add(this->choice_out);
			this->Controls->Add(this->choice_in);
			this->Controls->Add(this->change_out);
			this->Controls->Add(this->change_in);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm_plosch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ѕлощадь";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void change_in_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convert_in_out == 0) {
			this->choice_in->Text = "см^2";
			convert_in_out++;
		}
		else if (convert_in_out == 1) {
			this->choice_in->Text = "м^2";
			convert_in_out++;
		}
		else if (convert_in_out == 2) {
			this->choice_in->Text = "км^2";
			convert_in_out++;
		}
		else if (convert_in_out == 3) {
			this->choice_in->Text = "мм^2";
			convert_in_out++;
		}
		if (convert_in_out > 3) {
			convert_in_out = 0;
		}
	}
	private: System::Void change_out_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convert_out_in == 0) {
			this->choice_out->Text = "см^2";
			convert_out_in++;
		}
		else if (convert_out_in == 1) {
			this->choice_out->Text = "м^2";
			convert_out_in++;
		}
		else if (convert_out_in == 2) {
			this->choice_out->Text = "км^2";
			convert_out_in++;
		}
		else if (convert_out_in == 3) {
			this->choice_out->Text = "мм^2";
			convert_out_in++;
		}
		if (convert_out_in > 3) {
			convert_out_in = 0;
		}
	}
	private: System::Void converter_plosch(System::Object^ sender, System::EventArgs^ e) {
		long float size_res;
		if (this->choice_in->Text == "см^2") {
			if (this->choice_out->Text == "см^2")
				this->convert_out->Text = this->user_in->Text;
			else if (this->choice_out->Text == "м^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res = size_res / 10000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "км^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res = size_res / 10000000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "мм^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res = size_res * 100;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
		}
		else if (this->choice_in->Text == "м^2") {
			if (this->choice_out->Text == "см^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 10000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "м^2")
				this->convert_out->Text = this->user_in->Text;
			else if (this->choice_out->Text == "км^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 1000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "мм^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 1000000;//0
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
		}
		else if (this->choice_in->Text == "км^2") {
			if (this->choice_out->Text == "см^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 10000000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "м^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 1000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "км^2")
				this->convert_out->Text = this->user_in->Text;
			else if (this->choice_out->Text == "мм^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 1000000000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;

			}
		}
		else if (this->choice_in->Text == "мм^2") {
			if (this->choice_out->Text == "см^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 100;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "м^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 1000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "км^2") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 1000000000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "мм^2")
				this->convert_out->Text = this->user_in->Text;
		}
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Hide();
	}
};
}
