#pragma once

namespace Ejercicio02 {
	#include "Header.h"
	#include <stdio.h>
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
			arroriginal=NULL;
			N=new int;
			*N=0;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{   delete N;
		    delete arroriginal;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblTitulo;
	protected: 
	private: System::Windows::Forms::Label^  lblNro;
	private: System::Windows::Forms::Button^  btnInsertaFinal;
	private: System::Windows::Forms::Button^  btnInsertaInicio;
	private: System::Windows::Forms::Button^  btnInsertaPosicion;
	private: System::Windows::Forms::Button^  btnEliminarOcurrencias;
	private: System::Windows::Forms::ListBox^  lstArreglo;
	private: System::Windows::Forms::TextBox^  txtNro;

	private:
		int* arroriginal;  //Arreglo original de datos
		int* N;				//Cantidad de elementos en el arreglo

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
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblNro = (gcnew System::Windows::Forms::Label());
			this->btnInsertaFinal = (gcnew System::Windows::Forms::Button());
			this->btnInsertaInicio = (gcnew System::Windows::Forms::Button());
			this->btnInsertaPosicion = (gcnew System::Windows::Forms::Button());
			this->btnEliminarOcurrencias = (gcnew System::Windows::Forms::Button());
			this->lstArreglo = (gcnew System::Windows::Forms::ListBox());
			this->txtNro = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(22, 23);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(221, 25);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Arreglo de Números";
			// 
			// lblNro
			// 
			this->lblNro->AutoSize = true;
			this->lblNro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblNro->Location = System::Drawing::Point(23, 290);
			this->lblNro->Name = L"lblNro";
			this->lblNro->Size = System::Drawing::Size(39, 24);
			this->lblNro->TabIndex = 1;
			this->lblNro->Text = L"N : ";
			// 
			// btnInsertaFinal
			// 
			this->btnInsertaFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnInsertaFinal->Location = System::Drawing::Point(26, 101);
			this->btnInsertaFinal->Name = L"btnInsertaFinal";
			this->btnInsertaFinal->Size = System::Drawing::Size(217, 28);
			this->btnInsertaFinal->TabIndex = 2;
			this->btnInsertaFinal->Text = L"Insertar al Final";
			this->btnInsertaFinal->UseVisualStyleBackColor = true;
			this->btnInsertaFinal->Click += gcnew System::EventHandler(this, &MyForm::btnInsertaFinal_Click);
			// 
			// btnInsertaInicio
			// 
			this->btnInsertaInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnInsertaInicio->Location = System::Drawing::Point(26, 146);
			this->btnInsertaInicio->Name = L"btnInsertaInicio";
			this->btnInsertaInicio->Size = System::Drawing::Size(217, 28);
			this->btnInsertaInicio->TabIndex = 3;
			this->btnInsertaInicio->Text = L"Insertar al Inicio";
			this->btnInsertaInicio->UseVisualStyleBackColor = true;
			this->btnInsertaInicio->Click += gcnew System::EventHandler(this, &MyForm::btnInsertaInicio_Click);
			// 
			// btnInsertaPosicion
			// 
			this->btnInsertaPosicion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnInsertaPosicion->Location = System::Drawing::Point(26, 191);
			this->btnInsertaPosicion->Name = L"btnInsertaPosicion";
			this->btnInsertaPosicion->Size = System::Drawing::Size(217, 28);
			this->btnInsertaPosicion->TabIndex = 4;
			this->btnInsertaPosicion->Text = L"Insertar en Posición";
			this->btnInsertaPosicion->UseVisualStyleBackColor = true;
			this->btnInsertaPosicion->Click += gcnew System::EventHandler(this, &MyForm::btnInsertaPosicion_Click);
			// 
			// btnEliminarOcurrencias
			// 
			this->btnEliminarOcurrencias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEliminarOcurrencias->Location = System::Drawing::Point(26, 236);
			this->btnEliminarOcurrencias->Name = L"btnEliminarOcurrencias";
			this->btnEliminarOcurrencias->Size = System::Drawing::Size(217, 28);
			this->btnEliminarOcurrencias->TabIndex = 5;
			this->btnEliminarOcurrencias->Text = L"Eliminar Ocurrencias";
			this->btnEliminarOcurrencias->UseVisualStyleBackColor = true;
			this->btnEliminarOcurrencias->Click += gcnew System::EventHandler(this, &MyForm::btnEliminarOcurrencias_Click);
			// 
			// lstArreglo
			// 
			this->lstArreglo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstArreglo->FormattingEnabled = true;
			this->lstArreglo->ItemHeight = 20;
			this->lstArreglo->Location = System::Drawing::Point(273, 91);
			this->lstArreglo->Name = L"lstArreglo";
			this->lstArreglo->Size = System::Drawing::Size(122, 224);
			this->lstArreglo->TabIndex = 6;
			// 
			// txtNro
			// 
			this->txtNro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNro->Location = System::Drawing::Point(27, 59);
			this->txtNro->Name = L"txtNro";
			this->txtNro->Size = System::Drawing::Size(100, 26);
			this->txtNro->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 341);
			this->Controls->Add(this->txtNro);
			this->Controls->Add(this->lstArreglo);
			this->Controls->Add(this->btnEliminarOcurrencias);
			this->Controls->Add(this->btnInsertaPosicion);
			this->Controls->Add(this->btnInsertaInicio);
			this->Controls->Add(this->btnInsertaFinal);
			this->Controls->Add(this->lblNro);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void Listar_Elementos_en_ListBox(){    
		lstArreglo->Items->Clear();
	    for (int i=0;i<*N;i++)
			lstArreglo->Items->Add(arroriginal[i].ToString());
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void btnInsertaFinal_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNro->Text->Length>0){
			int Dato=Convert::ToInt32(txtNro->Text);
			arroriginal=Agregar_nuevo_Dato(arroriginal,Dato,N);
			Listar_Elementos_en_ListBox();
			txtNro->Clear();
			lblNro->Text="N : " + (*N).ToString();
		}
	}

	private: System::Void btnInsertaInicio_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNro->Text->Length>0){
			int Dato=Convert::ToInt32(txtNro->Text);
			arroriginal=Agregar_nuevo_Dato_alinicio(arroriginal,Dato,N);
			Listar_Elementos_en_ListBox();
			txtNro->Clear();
			lblNro->Text="N : " + (*N).ToString();
		}
	}
	
	private: System::Void btnInsertaPosicion_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNro->Text->Length>0 && lstArreglo->SelectedIndex!=-1){
			int Dato=Convert::ToInt32(txtNro->Text);
			int posicion=Convert::ToInt32(lstArreglo->SelectedIndex+1);
			arroriginal=Agregar_nuevo_Dato_enposicion(arroriginal,Dato,N,posicion);
			Listar_Elementos_en_ListBox();
			txtNro->Clear();
			lblNro->Text="N : " + (*N).ToString();
		}
	}
	
	private: System::Void btnEliminarOcurrencias_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lstArreglo->SelectedIndex!=-1){
			int Dato= Convert::ToInt32(lstArreglo->Items[lstArreglo->SelectedIndex]);
			arroriginal=Eliminar_Ocurrencias_Dato(arroriginal,Dato,N);
			Listar_Elementos_en_ListBox();
			lblNro->Text="N : " + (*N).ToString();
			lstArreglo->SelectedIndex=-1;
		}
	}
};
}
