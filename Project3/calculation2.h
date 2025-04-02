#pragma once
#include "NextPage.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculation2
	/// </summary>
	public ref class calculation2 : public System::Windows::Forms::Form
	{
	public:
		int i;
	public:
		Form^ obj;
		calculation2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		calculation2(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		calculation2(String^data, int Price)
		{
			InitializeComponent();
			label2->Text = data;
			i = Price;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~calculation2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculation2::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Cyan;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Wide Latin", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(845, 501);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 78);
			this->button4->TabIndex = 25;
			this->button4->Text = L"PAY";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &calculation2::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(513, 651);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 32);
			this->label7->TabIndex = 24;
			this->label7->Text = L"00.00/=";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(508, 504);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(248, 34);
			this->textBox2->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BurlyWood;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(655, 343);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 41);
			this->button2->TabIndex = 22;
			this->button2->Text = L"calculate";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &calculation2::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Brown;
			this->label6->Location = System::Drawing::Point(20, 504);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(442, 29);
			this->label6->TabIndex = 21;
			this->label6->Text = L"AMMOUNT OF YOU GOING TO PAY";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(344, 380);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 38);
			this->label5->TabIndex = 20;
			this->label5->Text = L"00.00/=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::CadetBlue;
			this->label4->Location = System::Drawing::Point(88, 377);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 42);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Total price:Rs";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(109, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 32);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Qunantity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(277, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 32);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Value";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(125, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 32);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Price :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(456, 17);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 91);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Your bill";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(297, 262);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 30);
			this->textBox1->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(247, 651);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(260, 35);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Your Balance is :Rs";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button3->Location = System::Drawing::Point(1032, 646);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 47);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Next";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &calculation2::button3_Click);
			// 
			// calculation2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1187, 705);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"calculation2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculation2";
			this->Load += gcnew System::EventHandler(this, &calculation2::calculation2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(textBox1->Text) * i;
		label5->Text = System::Convert::ToString(output);
		this->button4->Enabled = true;

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int amount = System::Convert::ToInt16(textBox2->Text);

	int output = System::Convert::ToInt16(textBox1->Text) * i;
	if (amount >= output)
	{
		label7->Text = System::Convert::ToString(amount - output);
		MessageBox::Show("Payment Successfully\nPlease get your balance\nPress Next button to continue..", "Complete payment", MessageBoxButtons::OK);
		this->button3->Enabled = true;
	}
	else {
		MessageBox::Show("Please Enter Sufficient Balance", "Issufficient Balance", MessageBoxButtons::OK);
		textBox2->Clear();
	}
}
    private: System::Void calculation2_Load(System::Object^ sender, System::EventArgs^ e) {
		//label2->Text = dp->getPrice();
    }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	NextPage^ obj = gcnew NextPage(this);
	obj->ShowDialog();

	if (this) {
		this->Hide();
		obj->Show();
		if (this) {
			obj->Hide();
		}
	}

}
};
}
