#pragma once
#include "calculation1.h"
#include "NextPage.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for snack
	/// </summary>
	public ref class snack : public System::Windows::Forms::Form
	{
	public:
		Form^ objs;
		snack(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		snack(Form^ obj1)
		{
			objs = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~snack()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(snack::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(797, 470);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(339, 26);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Mango Con Chile: Rs 200.00";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Fuchsia;
			this->label3->Location = System::Drawing::Point(424, 470);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(296, 26);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Peking Duck : Rs 350.00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(82, 470);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 26);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Frimax : Rs 250.00";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(445, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 62);
			this->label1->TabIndex = 16;
			this->label1->Text = L"SNACKS";
			this->label1->Click += gcnew System::EventHandler(this, &snack::label1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(894, 574);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 43);
			this->button3->TabIndex = 15;
			this->button3->Text = L"BUY";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &snack::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Fuchsia;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(512, 574);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 43);
			this->button2->TabIndex = 14;
			this->button2->Text = L"BUY";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &snack::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(130, 574);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 43);
			this->button1->TabIndex = 13;
			this->button1->Text = L"BUY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &snack::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(827, 139);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(260, 286);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(456, 139);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(260, 286);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(75, 139);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 286);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// snack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1163, 678);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"snack";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"snack";
			this->Load += gcnew System::EventHandler(this, &snack::snack_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		calculation1^ obj = gcnew calculation1("Frimax (1pc)=Rs 250.00",250);
		obj->ShowDialog();

		if (this) {
			this->Hide();
			objs->Show();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	calculation1^ obj = gcnew calculation1("Peaking Duck (1pc)=Rs 350.00", 350);
	obj->ShowDialog();

	if (this) {
		this->Hide();
		objs->Show();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	calculation1^ obj = gcnew calculation1("Mango Con Chile (1pc)=Rs 200.00", 200);
	obj->ShowDialog();

	if (this) {
		this->Hide();
		objs->Show();
	}
}
private: System::Void snack_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
