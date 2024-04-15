#include "MyForm_size.h"
#include "MyForm_plosch.h"
#include "MyForm_obe.h"
#include "MyForm_SysSch.h"
#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	protected:



	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_9;


	private: System::Windows::Forms::Button^ button_4;

	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_5;


	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_3;


	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_res;



	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_ymn;
	private: System::Windows::Forms::Button^ button_delen;


	private: System::Windows::Forms::Button^ button_size;
			 System::Windows::Forms::Button^ button_plosch;
			 System::Windows::Forms::Button^ button_obe;
			 System::Windows::Forms::Button^ button_SysSch;





	private: System::Windows::Forms::Button^ button_ac;
	private: System::Windows::Forms::Button^ button_percent;


	private: System::Windows::Forms::Button^ button_kor;
	private: System::Windows::Forms::Label^ label_res;
	private: long float num_first;
	private: char user_action;
	public: static bool form_size = false;
	private: Form^ forms = gcnew Form; //
	private: MyForm_size^ cform_size = gcnew MyForm_size;
			 MyForm_plosch^ form_plosch = gcnew MyForm_plosch;
			 MyForm_obe^ form_obe = gcnew MyForm_obe;
			 MyForm_SysSch^ form_sys_sch = gcnew MyForm_SysSch;
	
	private: System::Windows::Forms::Button^ button1;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_res = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_ymn = (gcnew System::Windows::Forms::Button());
			this->button_delen = (gcnew System::Windows::Forms::Button());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_kor = (gcnew System::Windows::Forms::Button());
			this->label_res = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_size = (gcnew System::Windows::Forms::Button()); //
			this->button_plosch = (gcnew System::Windows::Forms::Button());//
			this->button_obe = (gcnew System::Windows::Forms::Button());
			this->button_SysSch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->ForeColor = System::Drawing::Color::White;
			this->button_7->Location = System::Drawing::Point(2, 324);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(98, 66);
			this->button_7->TabIndex = 1;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->ForeColor = System::Drawing::Color::White;
			this->button_8->Location = System::Drawing::Point(106, 324);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(98, 66);
			this->button_8->TabIndex = 2;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->ForeColor = System::Drawing::Color::White;
			this->button_6->Location = System::Drawing::Point(210, 396);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(98, 66);
			this->button_6->TabIndex = 3;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->ForeColor = System::Drawing::Color::White;
			this->button_9->Location = System::Drawing::Point(210, 324);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(98, 66);
			this->button_9->TabIndex = 4;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->ForeColor = System::Drawing::Color::White;
			this->button_4->Location = System::Drawing::Point(2, 396);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(98, 66);
			this->button_4->TabIndex = 5;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->ForeColor = System::Drawing::Color::White;
			this->button_2->Location = System::Drawing::Point(106, 468);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(98, 66);
			this->button_2->TabIndex = 6;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->ForeColor = System::Drawing::Color::White;
			this->button_5->Location = System::Drawing::Point(106, 396);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(98, 66);
			this->button_5->TabIndex = 7;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->ForeColor = System::Drawing::Color::White;
			this->button_1->Location = System::Drawing::Point(2, 468);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(98, 66);
			this->button_1->TabIndex = 8;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->ForeColor = System::Drawing::Color::White;
			this->button_3->Location = System::Drawing::Point(210, 468);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(98, 66);
			this->button_3->TabIndex = 9;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->ForeColor = System::Drawing::Color::White;
			this->button_0->Location = System::Drawing::Point(2, 540);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(98, 52);
			this->button_0->TabIndex = 10;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::digits_numbers);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::Color::White;
			this->button_dot->Location = System::Drawing::Point(106, 540);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(98, 52);
			this->button_dot->TabIndex = 11;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button_res
			// 
			this->button_res->BackColor = System::Drawing::Color::OrangeRed;
			this->button_res->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_res->ForeColor = System::Drawing::Color::White;
			this->button_res->Location = System::Drawing::Point(210, 540);
			this->button_res->Name = L"button_res";
			this->button_res->Size = System::Drawing::Size(98, 52);
			this->button_res->TabIndex = 12;
			this->button_res->Text = L"=";
			this->button_res->UseVisualStyleBackColor = false;
			this->button_res->Click += gcnew System::EventHandler(this, &MyForm::button_res_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(337, 324);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(71, 66);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(337, 396);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(71, 66);
			this->button_plus->TabIndex = 14;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_ymn
			// 
			this->button_ymn->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_ymn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ymn->ForeColor = System::Drawing::Color::White;
			this->button_ymn->Location = System::Drawing::Point(337, 468);
			this->button_ymn->Name = L"button_ymn";
			this->button_ymn->Size = System::Drawing::Size(71, 66);
			this->button_ymn->TabIndex = 15;
			this->button_ymn->Text = L"*";
			this->button_ymn->UseVisualStyleBackColor = false;
			this->button_ymn->Click += gcnew System::EventHandler(this, &MyForm::button_ymn_Click);
			// 
			// button_delen
			// 
			this->button_delen->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_delen->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delen->ForeColor = System::Drawing::Color::White;
			this->button_delen->Location = System::Drawing::Point(337, 540);
			this->button_delen->Name = L"button_delen";
			this->button_delen->Size = System::Drawing::Size(71, 52);
			this->button_delen->TabIndex = 16;
			this->button_delen->Text = L"÷";
			this->button_delen->UseVisualStyleBackColor = false;
			this->button_delen->Click += gcnew System::EventHandler(this, &MyForm::button_delen_Click);
			// 
			// button_ac
			// 
			this->button_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ac->ForeColor = System::Drawing::Color::White;
			this->button_ac->Location = System::Drawing::Point(2, 252);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(98, 66);
			this->button_ac->TabIndex = 17;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_percent->ForeColor = System::Drawing::Color::White;
			this->button_percent->Location = System::Drawing::Point(106, 252);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(98, 66);
			this->button_percent->TabIndex = 18;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_delen_ost_Click);
			// 
			// button_kor
			// 
			this->button_kor->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_kor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_kor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_kor->ForeColor = System::Drawing::Color::White;
			this->button_kor->Location = System::Drawing::Point(210, 252);
			this->button_kor->Name = L"button_kor";
			this->button_kor->Size = System::Drawing::Size(98, 66);
			this->button_kor->TabIndex = 19;
			this->button_kor->Text = L"√";
			this->button_kor->UseVisualStyleBackColor = false;
			// 
			// label_res
			// 
			this->label_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_res->ForeColor = System::Drawing::Color::White;
			this->label_res->Location = System::Drawing::Point(12, 182);
			this->label_res->Name = L"label_res";
			this->label_res->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label_res->Size = System::Drawing::Size(396, 56);
			this->label_res->TabIndex = 20;
			this->label_res->Text = L"0";
			this->label_res->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 46);
			this->button1->TabIndex = 21;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//
			// button_size
			// 
			this->button_size->Size = System::Drawing::Size(64, 29);
			this->button_size->Text = "Длина";
			this->button_size->ForeColor = System::Drawing::Color::White;
			this->button_size->BackColor = System::Drawing::Color::Gray;
			this->button_size->Location = System::Drawing::Point(100,70);
			this->button_size->Click += gcnew System::EventHandler(this, &MyForm::button_size_Click);
			//
			// button_plosch
			// 
			this->button_plosch->Size = System::Drawing::Size(64, 29);
			this->button_plosch->Text = "Площадь";
			this->button_plosch->ForeColor = System::Drawing::Color::White;
			this->button_plosch->BackColor = System::Drawing::Color::Gray;
			this->button_plosch->Location = System::Drawing::Point(100,105);
			this->button_plosch->Click += gcnew System::EventHandler(this, &MyForm::button_plosch_Click);
			//
			// button_obe
			// 
			this->button_obe->Size = System::Drawing::Size(64, 29);
			this->button_obe->Text = "Обьём";
			this->button_obe->ForeColor = System::Drawing::Color::White;
			this->button_obe->BackColor = System::Drawing::Color::Gray;
			this->button_obe->Location = System::Drawing::Point(100, 140);
			this->button_obe->Click += gcnew System::EventHandler(this, &MyForm::button_obe_Click);
			//
			// button_SysSch
			// 
			this->button_SysSch->Size = System::Drawing::Size(83, 29);
			this->button_SysSch->Text = "Программист";
			this->button_SysSch->ForeColor = System::Drawing::Color::White;
			this->button_SysSch->BackColor = System::Drawing::Color::Gray;
			this->button_SysSch->Location = System::Drawing::Point(95, 175);
			this->button_SysSch->Click += gcnew System::EventHandler(this, &MyForm::button_SysSch_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(420, 604);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_res);
			this->Controls->Add(this->button_kor);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->button_delen);
			this->Controls->Add(this->button_ymn);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_res);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void digits_numbers(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->label_res->Text == "0") {
			this->label_res->Text = button->Text;
		}
		else if (this->label_res->Text != "0") {
			this->label_res->Text += button->Text;
		}

	}
	
		

	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		operations('+');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		operations('-');
	}
	private: System::Void button_ymn_Click(System::Object^ sender, System::EventArgs^ e) {
		operations('*');
	}
	private: System::Void button_delen_Click(System::Object^ sender, System::EventArgs^ e) {
		operations('/');
	}
	private: System::Void button_delen_ost_Click(System::Object^ sender, System::EventArgs^ e) {
		operations('%');
	}
	private: System::Void operations(char action) {
		this->num_first = System::Convert::ToDouble(this->label_res->Text); 
		this->user_action = action;
		this->label_res->Text = "0";
		
	}
	
	private: System::Void button_res_Click(System::Object^ sender, System::EventArgs^ e) {
		long float second = System::Convert::ToDouble(this->label_res->Text);
		switch (this->user_action) {
		case '+':
			this->label_res->Text = System::Convert::ToString(num_first + second);
			break;
		case '-':
			this->label_res->Text = System::Convert::ToString(num_first - second);
			break;
		case '*':
			this->label_res->Text = System::Convert::ToString(num_first * second);
			break;
		case '/':
			if (second != 0) {
				this->label_res->Text = System::Convert::ToString(num_first / second);
			}
			else {
				MessageBox::Show(this, "Деление на ноль запрещено", "Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
			break;
		case '%':
			this->label_res->Text = System::Convert::ToString(num_first * second / 100);
			break;
		}
	}
	private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_res->Text = "0";
		num_first = 0;
		user_action = ' ';
	}
	private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->label_res->Text->Contains(",")) {
			this->label_res->Text += ",";
		}
	}
		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		forms->Show();
		forms->BackColor = Color::Black;
		forms->Controls->Add(this->button_size);
		forms->Controls->Add(this->button_plosch);
		forms->Controls->Add(this->button_obe);
		forms->Controls->Add(this->button_SysSch);
		forms->Name = "Выбор";
		forms->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	}
	private: System::Void button_size_Click(System::Object^ sender, System::EventArgs^ e) {
		forms->Close();
		cform_size->Show();
	}
	private: System::Void button_plosch_Click(System::Object^ sender, System::EventArgs^ e) {
		forms->Close();
		form_plosch->Show();
	}
	private: System::Void button_obe_Click(System::Object^ sender, System::EventArgs^ e) {
		forms->Close();
		form_obe->Show();
	}
	private: System::Void button_SysSch_Click(System::Object^ sender, System::EventArgs^ e) {
		forms->Close();
		form_sys_sch->Show();
	}
};
}
