#pragma once
#include "snackdrink.h"
#include "NextPage.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Beige;
			this->label1->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Chartreuse;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(327, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(508, 96);
			this->label1->TabIndex = 4;
			this->label1->Text = L"WELCOME";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Cyan;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(179, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(782, 62);
			this->label2->TabIndex = 5;
			this->label2->Text = L"SIMPLE SNACK MACHINE";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(451, 373);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 155);
			this->button1->TabIndex = 6;
			this->button1->Text = L"BUY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1117, 613);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		
		snackdrink obj1;
		
		obj1.ShowDialog();
		
		
		

	}
};
}
