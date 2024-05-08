#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm_size
	/// </summary>
	public ref class MyForm_size : public System::Windows::Forms::Form
	{
	public:
		MyForm_size(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm_size()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ choice_in;
	private: System::Windows::Forms::Label^ choice_out;
	private: System::Windows::Forms::Button^ change_in;
	private: System::Windows::Forms::Button^ change_out;
	private: int convert_in_out = 0;
	private: int convert_out_in = 0;
	private: System::Windows::Forms::TextBox^ user_in;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::Label^ convert_out;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_close;



	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->choice_in = (gcnew System::Windows::Forms::Label());
			this->choice_out = (gcnew System::Windows::Forms::Label());
			this->change_in = (gcnew System::Windows::Forms::Button());
			this->change_out = (gcnew System::Windows::Forms::Button());
			this->user_in = (gcnew System::Windows::Forms::TextBox());
			this->convert_out = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// choice_in
			// 
			this->choice_in->AutoSize = true;
			this->choice_in->ForeColor = System::Drawing::Color::White;
			this->choice_in->Location = System::Drawing::Point(180, 109);
			this->choice_in->Name = L"choice_in";
			this->choice_in->Size = System::Drawing::Size(13, 16);
			this->choice_in->TabIndex = 0;
			this->choice_in->Text = L"  ";
			// 
			// choice_out
			// 
			this->choice_out->AutoSize = true;
			this->choice_out->ForeColor = System::Drawing::Color::White;
			this->choice_out->Location = System::Drawing::Point(180, 182);
			this->choice_out->Name = L"choice_out";
			this->choice_out->Size = System::Drawing::Size(16, 16);
			this->choice_out->TabIndex = 1;
			this->choice_out->Text = L"   ";
			// 
			// change_in
			// 
			this->change_in->BackColor = System::Drawing::Color::Gray;
			this->change_in->ForeColor = System::Drawing::Color::White;
			this->change_in->Location = System::Drawing::Point(263, 105);
			this->change_in->Name = L"change_in";
			this->change_in->Size = System::Drawing::Size(75, 23);
			this->change_in->TabIndex = 2;
			this->change_in->Text = L"change";
			this->change_in->UseVisualStyleBackColor = false;
			this->change_in->Click += gcnew System::EventHandler(this, &MyForm_size::change_in_Click);
			// 
			// change_out
			// 
			this->change_out->BackColor = System::Drawing::Color::Gray;
			this->change_out->ForeColor = System::Drawing::Color::White;
			this->change_out->Location = System::Drawing::Point(263, 179);
			this->change_out->Name = L"change_out";
			this->change_out->Size = System::Drawing::Size(75, 23);
			this->change_out->TabIndex = 3;
			this->change_out->Text = L"change";
			this->change_out->UseVisualStyleBackColor = false;
			this->change_out->Click += gcnew System::EventHandler(this, &MyForm_size::change_out_Click);
			// 
			// user_in
			// 
			this->user_in->Location = System::Drawing::Point(16, 109);
			this->user_in->Name = L"user_in";
			this->user_in->Size = System::Drawing::Size(100, 22);
			this->user_in->TabIndex = 4;
			// 
			// convert_out
			// 
			this->convert_out->AutoSize = true;
			this->convert_out->ForeColor = System::Drawing::Color::White;
			this->convert_out->Location = System::Drawing::Point(13, 185);
			this->convert_out->Name = L"convert_out";
			this->convert_out->Size = System::Drawing::Size(14, 16);
			this->convert_out->TabIndex = 5;
			this->convert_out->Text = L"0";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(133, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Result";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_size::converter_size);
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::Red;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Location = System::Drawing::Point(314, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(25, 25);
			this->button_close->TabIndex = 10;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm_size::button_close_Click);
			// 
			// MyForm_size
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(351, 392);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->convert_out);
			this->Controls->Add(this->user_in);
			this->Controls->Add(this->change_out);
			this->Controls->Add(this->change_in);
			this->Controls->Add(this->choice_out);
			this->Controls->Add(this->choice_in);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm_size";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm_size";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void change_in_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convert_in_out == 0) {
			this->choice_in->Text = "сантиметр";
			convert_in_out++;
		}
		else if (convert_in_out == 1) {
			this->choice_in->Text = "метр";
			convert_in_out++;
		}
		else if (convert_in_out == 2) {
			this->choice_in->Text = "километр";
			convert_in_out++;
		}
		else if (convert_in_out == 3) {
			this->choice_in->Text = "милиметр";
			convert_in_out++;
		}
		if (convert_in_out > 3) {
			convert_in_out = 0;
		}
	}	
	private: System::Void change_out_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convert_out_in == 0) {
			this->choice_out->Text = "сантиметр";
			convert_out_in++;
		}
		else if (convert_out_in == 1) {
			this->choice_out->Text = "метр";
			convert_out_in++;
		}
		else if (convert_out_in == 2) {
			this->choice_out->Text = "километр";
			convert_out_in++;
		}
		else if (convert_out_in == 3) {
			this->choice_out->Text = "милиметр";
			convert_out_in++;
		}
		if (convert_out_in > 3) {
			convert_out_in = 0;
		}
	}
	private: System::Void converter_size(System::Object^ sender, System::EventArgs^ e) {
		long float size_res;
		if (this->choice_in->Text == "сантиметр") {
			if (this->choice_out->Text == "сантиметр")
				this->convert_out->Text = this->user_in->Text;
			else if (this->choice_out->Text == "метр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res = size_res / 100;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "километр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res = size_res / 100000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "милиметр"){
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res = size_res * 10;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
		}
		else if (this->choice_in->Text == "метр") {
			if (this->choice_out->Text == "сантиметр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 100;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "метр")
				this->convert_out->Text = this->user_in->Text;
			else if (this->choice_out->Text == "километр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 1000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "милиметр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 1000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
		}
		else if (this->choice_in->Text == "километр") {
			if (this->choice_out->Text == "сантиметр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 100000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "метр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 1000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "километр")
				this->convert_out->Text = this->user_in->Text;
			else if (this->choice_out->Text == "милиметр"){
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res *= 1000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			
			}
		}
		else if (this->choice_in->Text == "милиметр") {
			if (this->choice_out->Text == "сантиметр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 10;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "метр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 1000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "километр") {
				size_res = System::Convert::ToDouble(this->user_in->Text);
				size_res /= 1000000;
				this->convert_out->Text = System::Convert::ToString(size_res);
				size_res = 0;
			}
			else if (this->choice_out->Text == "милиметр")
				this->convert_out->Text = this->user_in->Text;
		}
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Hide();
	}
};
}
