#pragma once

namespace Sumar2numeros {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#include <stdio.h>;
#include "Header.h";
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
			arrNum1 = NULL;
			arrNum2 = NULL;
			arrNum3 = NULL;
			N1 = new int;
			N2 = new int;
			N3 = new int;
			*N1 = 0;
			*N2 = 0;
			*N3 = 0;
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
	private: System::Windows::Forms::Label^  lblTitulo;
	protected:
	private: System::Windows::Forms::Label^  lblNro1;
	private: System::Windows::Forms::Label^  lblNro2;
	private: System::Windows::Forms::Label^  lblvalorNro1;
	private: System::Windows::Forms::Label^  lblvalorNro2;
	private: System::Windows::Forms::Label^  lblvalorNro3;
	private: System::Windows::Forms::TextBox^  txtNro1;
	private: System::Windows::Forms::TextBox^  txtNro2;
	private: System::Windows::Forms::Button^  btnIngresarNro1;
	private: System::Windows::Forms::Button^  btnIngresar2;
	private: System::Windows::Forms::Button^  lblSumar;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int *arrNum1;
		int *arrNum2;
		int *arrNum3;
		int *N1;
		int *N2;
		int *N3;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblNro1 = (gcnew System::Windows::Forms::Label());
			this->lblNro2 = (gcnew System::Windows::Forms::Label());
			this->lblvalorNro1 = (gcnew System::Windows::Forms::Label());
			this->lblvalorNro2 = (gcnew System::Windows::Forms::Label());
			this->lblvalorNro3 = (gcnew System::Windows::Forms::Label());
			this->txtNro1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNro2 = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresarNro1 = (gcnew System::Windows::Forms::Button());
			this->btnIngresar2 = (gcnew System::Windows::Forms::Button());
			this->lblSumar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(227, 37);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(170, 22);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Suma de 2 números";
			// 
			// lblNro1
			// 
			this->lblNro1->AutoSize = true;
			this->lblNro1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNro1->Location = System::Drawing::Point(79, 98);
			this->lblNro1->Name = L"lblNro1";
			this->lblNro1->Size = System::Drawing::Size(49, 22);
			this->lblNro1->TabIndex = 1;
			this->lblNro1->Text = L"Nro1";
			// 
			// lblNro2
			// 
			this->lblNro2->AutoSize = true;
			this->lblNro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNro2->Location = System::Drawing::Point(79, 143);
			this->lblNro2->Name = L"lblNro2";
			this->lblNro2->Size = System::Drawing::Size(49, 22);
			this->lblNro2->TabIndex = 2;
			this->lblNro2->Text = L"Nro2";
			// 
			// lblvalorNro1
			// 
			this->lblvalorNro1->AutoSize = true;
			this->lblvalorNro1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvalorNro1->Location = System::Drawing::Point(359, 98);
			this->lblvalorNro1->Name = L"lblvalorNro1";
			this->lblvalorNro1->Size = System::Drawing::Size(67, 22);
			this->lblvalorNro1->TabIndex = 3;
			this->lblvalorNro1->Text = L"Valor 1";
			// 
			// lblvalorNro2
			// 
			this->lblvalorNro2->AutoSize = true;
			this->lblvalorNro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvalorNro2->Location = System::Drawing::Point(359, 141);
			this->lblvalorNro2->Name = L"lblvalorNro2";
			this->lblvalorNro2->Size = System::Drawing::Size(67, 22);
			this->lblvalorNro2->TabIndex = 4;
			this->lblvalorNro2->Text = L"Valor 2";
			// 
			// lblvalorNro3
			// 
			this->lblvalorNro3->AutoSize = true;
			this->lblvalorNro3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvalorNro3->Location = System::Drawing::Point(359, 201);
			this->lblvalorNro3->Name = L"lblvalorNro3";
			this->lblvalorNro3->Size = System::Drawing::Size(91, 22);
			this->lblvalorNro3->TabIndex = 5;
			this->lblvalorNro3->Text = L"Sumatoria";
			// 
			// txtNro1
			// 
			this->txtNro1->Location = System::Drawing::Point(154, 98);
			this->txtNro1->Name = L"txtNro1";
			this->txtNro1->Size = System::Drawing::Size(36, 20);
			this->txtNro1->TabIndex = 6;
			// 
			// txtNro2
			// 
			this->txtNro2->Location = System::Drawing::Point(154, 145);
			this->txtNro2->Name = L"txtNro2";
			this->txtNro2->Size = System::Drawing::Size(36, 20);
			this->txtNro2->TabIndex = 7;
			// 
			// btnIngresarNro1
			// 
			this->btnIngresarNro1->Location = System::Drawing::Point(220, 95);
			this->btnIngresarNro1->Name = L"btnIngresarNro1";
			this->btnIngresarNro1->Size = System::Drawing::Size(75, 23);
			this->btnIngresarNro1->TabIndex = 8;
			this->btnIngresarNro1->Text = L"Ingresar";
			this->btnIngresarNro1->UseVisualStyleBackColor = true;
			this->btnIngresarNro1->Click += gcnew System::EventHandler(this, &MyForm::btnIngresarNro1_Click);
			// 
			// btnIngresar2
			// 
			this->btnIngresar2->Location = System::Drawing::Point(220, 142);
			this->btnIngresar2->Name = L"btnIngresar2";
			this->btnIngresar2->Size = System::Drawing::Size(75, 23);
			this->btnIngresar2->TabIndex = 9;
			this->btnIngresar2->Text = L"Ingresar";
			this->btnIngresar2->UseVisualStyleBackColor = true;
			this->btnIngresar2->Click += gcnew System::EventHandler(this, &MyForm::btnIngresar2_Click);
			// 
			// lblSumar
			// 
			this->lblSumar->Location = System::Drawing::Point(483, 97);
			this->lblSumar->Name = L"lblSumar";
			this->lblSumar->Size = System::Drawing::Size(75, 23);
			this->lblSumar->TabIndex = 10;
			this->lblSumar->Text = L"Sumar";
			this->lblSumar->UseVisualStyleBackColor = true;
			this->lblSumar->Click += gcnew System::EventHandler(this, &MyForm::lblSumar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 394);
			this->Controls->Add(this->lblSumar);
			this->Controls->Add(this->btnIngresar2);
			this->Controls->Add(this->btnIngresarNro1);
			this->Controls->Add(this->txtNro2);
			this->Controls->Add(this->txtNro1);
			this->Controls->Add(this->lblvalorNro3);
			this->Controls->Add(this->lblvalorNro2);
			this->Controls->Add(this->lblvalorNro1);
			this->Controls->Add(this->lblNro2);
			this->Controls->Add(this->lblNro1);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnIngresarNro1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNro1->Text->Length > 0){
			int Dato = Convert::ToInt32(txtNro1->Text);
			txtNro1->Clear();
			arrNum1 = Agregar_Al_Inicio(arrNum1, Dato, N1);
			lblvalorNro1->Text = "";
			for (int i = 0; i < *N1; i++)
				lblvalorNro1->Text = lblvalorNro1->Text + arrNum1[i].ToString();  
		}
	}
	private: System::Void btnIngresar2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNro2->Text->Length > 0){
			int Dato = Convert::ToInt32(txtNro2->Text);
			txtNro2->Clear();
			arrNum2 = Agregar_Al_Inicio(arrNum2, Dato, N2);
			lblvalorNro2->Text = "";
			for (int i = 0; i < *N2; i++)
				lblvalorNro2->Text = lblvalorNro2->Text + arrNum2[i].ToString(); 
		}
	}
			 int *Completar_con_ceros(int* arrenteros, int Cantceros, int *N)
			 {
				 for (int i = 0; i < Cantceros; i++)
					 arrenteros = Agregar_Al_Inicio(arrenteros, 0, N);
				 return arrenteros;
			 }

	private: System::Void lblSumar_Click(System::Object^  sender, System::EventArgs^  e) {

		*N3 = 0;
		arrNum3 = NULL;
		if (*N1 > *N2)
			arrNum2 = Completar_con_ceros(arrNum2, (*N1) - (*N2), N2);
		else
			arrNum1 = Completar_con_ceros(arrNum1, (*N2) - (*N1), N1);
		
		int suma = 0;
		int acarreo = 0;
		int digito;
		for (int i = *N1 - 1; i >= 0; i--){ 
			suma = arrNum1[i] + arrNum2[i] + acarreo;
			acarreo = suma / 10;
			digito = suma % 10;
			arrNum3 = Agregar_Al_Inicio(arrNum3, digito, N3);
		}
		if (acarreo != 0)
			arrNum3 = Agregar_Al_Inicio(arrNum3, acarreo, N3);
		lblvalorNro3->Text = ""; 
		for (int i = 0; i < *N3; i++)
			lblvalorNro3->Text += arrNum3[i].ToString();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
