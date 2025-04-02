#pragma once




namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NextPage
	/// </summary>
	public ref class NextPage : public System::Windows::Forms::Form
	{
	public:
		Form ^objF;
		NextPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NextPage(Form^ obj2)
		{
			objF = obj2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NextPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NextPage::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, -2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1037, 610);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Algerian", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(842, 415);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"NO😥";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NextPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Chartreuse;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Algerian", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(523, 415);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"YES😍";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &NextPage::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Cyan;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(123, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(792, 69);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Thank You Come AGAIN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(449, 312);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(542, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Do you want to buy Another item\? ";
			// 
			// NextPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 609);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"NextPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NextPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		objF->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you really want to exit?", "Exit warning ", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
};
}
