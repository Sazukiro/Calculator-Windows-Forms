#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonDivide;

	protected:

	private: System::Windows::Forms::Button^ buttonTimes;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::TextBox^ textResult;
	private: System::Windows::Forms::Button^ buttonAC;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonTimes = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->textResult = (gcnew System::Windows::Forms::TextBox());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDivide.BackgroundImage")));
			this->buttonDivide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonDivide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivide->Location = System::Drawing::Point(16, 274);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(71, 75);
			this->buttonDivide->TabIndex = 0;
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// buttonTimes
			// 
			this->buttonTimes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonTimes.BackgroundImage")));
			this->buttonTimes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonTimes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonTimes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTimes->Location = System::Drawing::Point(111, 274);
			this->buttonTimes->Name = L"buttonTimes";
			this->buttonTimes->Size = System::Drawing::Size(56, 75);
			this->buttonTimes->TabIndex = 3;
			this->buttonTimes->UseVisualStyleBackColor = true;
			this->buttonTimes->Click += gcnew System::EventHandler(this, &MyForm::buttonTimes_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMinus.BackgroundImage")));
			this->buttonMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->Location = System::Drawing::Point(111, 179);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(56, 75);
			this->buttonMinus->TabIndex = 4;
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPlus.BackgroundImage")));
			this->buttonPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(16, 179);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(71, 75);
			this->buttonPlus->TabIndex = 5;
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqual->Location = System::Drawing::Point(202, 179);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(94, 75);
			this->buttonEqual->TabIndex = 6;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// textResult
			// 
			this->textResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textResult->Location = System::Drawing::Point(38, 94);
			this->textResult->Name = L"textResult";
			this->textResult->Size = System::Drawing::Size(227, 20);
			this->textResult->TabIndex = 7;
			this->textResult->TextChanged += gcnew System::EventHandler(this, &MyForm::textResult_TextChanged);
			this->textResult->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textResult_KeyDown);
			this->textResult->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textResult_KeyUp);
			// 
			// buttonAC
			// 
			this->buttonAC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAC->Location = System::Drawing::Point(202, 274);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(94, 75);
			this->buttonAC->TabIndex = 8;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = true;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyForm::buttonAC_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(317, 414);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->textResult);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonTimes);
			this->Controls->Add(this->buttonDivide);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		float number1, number2;
		String^ operation;
	

private: System::Void TextBoxNumbers_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

}
private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
	   String^ str;
private: System::Void textResult_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	str = textResult->Text;
}
private: System::Void textResult_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ((e->KeyValue) < 48 || e->KeyValue > 59) {
		textResult->Text = str;
	}
}
private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "+";
	textResult->Clear();
}
private: System::Void buttonTimes_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "*";
	textResult->Clear();
}
private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "/";
	textResult->Clear();
}
private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "-";
	textResult->Clear();
}
private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	number2 = Convert::ToInt32(textResult->Text);
	textResult->Clear();
	if (operation == "+") textResult->Text = Convert::ToString(number1 + number2);
	if (operation == "-") textResult->Text = Convert::ToString(number1 - number2);
	if (operation == "*") textResult->Text = Convert::ToString(number1 * number2);
	if (operation == "/") textResult->Text = Convert::ToString(number1 / number2);
}
private: System::Void textResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textResult->Text = "";
}
};
}
