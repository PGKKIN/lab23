MyForm.h

#pragma once



namespace Calculator {



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

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button4;

	protected:



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

			this->label1 = (gcnew System::Windows::Forms::Label());

			this->textBox1 = (gcnew System::Windows::Forms::TextBox());

			this->textBox2 = (gcnew System::Windows::Forms::TextBox());

			this->button1 = (gcnew System::Windows::Forms::Button());

			this->button2 = (gcnew System::Windows::Forms::Button());

			this->button3 = (gcnew System::Windows::Forms::Button());

			this->button4 = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			// 

			// label1

			// 

			this->label1->AutoSize = true;

			this->label1->BackColor = System::Drawing::Color::White;

			this->label1->Location = System::Drawing::Point(34, 18);

			this->label1->Name = L"label1";

			this->label1->Size = System::Drawing::Size(159, 16);

			this->label1->TabIndex = 0;

			this->label1->Text = L"Please input two numbers";

			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);

			// 

			// textBox1

			// 

			this->textBox1->Location = System::Drawing::Point(47, 48);

			this->textBox1->Name = L"textBox1";

			this->textBox1->Size = System::Drawing::Size(132, 22);

			this->textBox1->TabIndex = 1;

			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);

			// 

			// textBox2

			// 

			this->textBox2->Location = System::Drawing::Point(47, 76);

			this->textBox2->Name = L"textBox2";

			this->textBox2->Size = System::Drawing::Size(132, 22);

			this->textBox2->TabIndex = 2;

			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);

			// 

			// button1

			// 

			this->button1->Location = System::Drawing::Point(25, 116);

			this->button1->Name = L"button1";

			this->button1->Size = System::Drawing::Size(30, 30);

			this->button1->TabIndex = 3;

			this->button1->Text = L"+";

			this->button1->UseVisualStyleBackColor = true;

			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

			// 

			// button2

			// 

			this->button2->Location = System::Drawing::Point(73, 116);

			this->button2->Name = L"button2";

			this->button2->Size = System::Drawing::Size(30, 30);

			this->button2->TabIndex = 4;

			this->button2->Text = L"-";

			this->button2->UseVisualStyleBackColor = true;

			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);

			// 

			// button3

			// 

			this->button3->Location = System::Drawing::Point(118, 116);

			this->button3->Name = L"button3";

			this->button3->Size = System::Drawing::Size(30, 30);

			this->button3->TabIndex = 5;

			this->button3->Text = L"*";

			this->button3->UseVisualStyleBackColor = true;

			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);

			// 

			// button4

			// 

			this->button4->Location = System::Drawing::Point(163, 116);

			this->button4->Name = L"button4";

			this->button4->Size = System::Drawing::Size(30, 30);

			this->button4->TabIndex = 6;

			this->button4->Text = L"/";

			this->button4->UseVisualStyleBackColor = true;

			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);

			// 

			// MyForm

			// 

			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);

			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor = System::Drawing::Color::Lime;

			this->ClientSize = System::Drawing::Size(232, 153);

			this->Controls->Add(this->button4);

			this->Controls->Add(this->button3);

			this->Controls->Add(this->button2);

			this->Controls->Add(this->button1);

			this->Controls->Add(this->textBox2);

			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->label1);

			this->MaximizeBox = false;

			this->MinimizeBox = false;

			this->Name = L"MyForm";

			this->Text = L"Calculator";

			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);

			this->ResumeLayout(false);

			this->PerformLayout();



		}

#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}



private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}



private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);

	MessageBox::Show(System::Convert::ToString(result), "Result", MessageBoxButtons::OK,MessageBoxIcon::None);

}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int result = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);

	MessageBox::Show(System::Convert::ToString(result), "Result", MessageBoxButtons::OK, MessageBoxIcon::None);

}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int result = System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);

	MessageBox::Show(System::Convert::ToString(result), "Result", MessageBoxButtons::OK, MessageBoxIcon::None);

}



private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	int result = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);

	MessageBox::Show(System::Convert::ToString(result), "Result", MessageBoxButtons::OK, MessageBoxIcon::None);

}



};

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

MyForm.cpp

#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void Main(array<String^>^ args) {

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Calculator::MyForm form;

    Application::Run(% form);

}
