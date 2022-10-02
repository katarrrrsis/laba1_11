#pragma once

#include "DLL.h"
#include "Words.h"
#include <msclr\marshal_cppstd.h>
#include <algorithm>

namespace Words {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ NextButton;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(498, 80);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Game::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Word";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(513, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Your word starts last letter";
			// 
			// NextButton
			// 
			this->NextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NextButton->Location = System::Drawing::Point(517, 113);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(498, 59);
			this->NextButton->TabIndex = 14;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &Game::NextButton_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(517, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(498, 80);
			this->textBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(62, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Words left to win";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1027, 194);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Game";
			this->Text = L"Game";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Game::Game_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int i = 0;

	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = gcnew String(getDB()[i]->getWord().c_str());
		textBox3->Text = gcnew String(std::to_string(getDB().size() - i).c_str());
	}
	
	private: System::Void NextButton_Click(System::Object^ sender, System::EventArgs^ e) {

		AnswerWord aword = AnswerWord(getDB()[i]->getWord());

		std::string inputWord = msclr::interop::marshal_as<std::string>(textBox2->Text);

		std::locale loc("rus_rus.1251");
		std::transform(inputWord.begin(), inputWord.end(), inputWord.begin(), uppercaseCustom(loc));

		if (std::find(getDBUser().begin(), getDBUser().end(), inputWord) == getDBUser().end()) {
			addWordUser(inputWord);

			if (std::find(getCheckDB().begin(), getCheckDB().end(), inputWord) != getCheckDB().end()) {
				

				if (aword.isValid(inputWord)) {
					auto findString = isFindWordStartsOnLetter(inputWord);
					if (findString.size() == 0) {
						// you win!
						MessageBox::Show("You win!");
					}
					else {
						i++;
						textBox1->Text = gcnew String(getDB()[i]->getWord().c_str());
						textBox3->Text = gcnew String(std::to_string(getDB().size() - i).c_str());
						textBox2->Text = "";
						/*textBox2->Text = gcnew String(findString.c_str());*/
					}
				}
			}
			else
			{
				MessageBox::Show("I don't know this word, please use another");
			}
		}
		else {
			MessageBox::Show("You use this word, please use another");
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	cleanMemory();
}
};
}
