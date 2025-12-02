#pragma once

#include "CantidadBoleto.h"

namespace proyectoZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de boletosForm
	/// </summary>
	public ref class boletosForm : public System::Windows::Forms::Form
	{
	public:
		boletosForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~boletosForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		// moved controls from CantidadBoleto into this form so they are editable in the designer
		System::Windows::Forms::Label^ lblPrompt;
		System::Windows::Forms::NumericUpDown^ nudCantidad;
		System::Windows::Forms::Button^ btnOkCantidad;
		System::Windows::Forms::Button^ btnCancelCantidad;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(400,320);
			this->Text = L"boletosForm";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			// selection label
			this->lblPrompt = (gcnew System::Windows::Forms::Label());
			this->lblPrompt->AutoSize = true;
			this->lblPrompt->Location = System::Drawing::Point(12,15);
			this->lblPrompt->Name = L"lblPrompt";
			this->lblPrompt->Size = System::Drawing::Size(200,13);
			this->lblPrompt->TabIndex =0;
			this->lblPrompt->Text = L"Seleccione la cantidad de boletos:";
			this->Controls->Add(this->lblPrompt);

			// numeric up down
			this->nudCantidad = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudCantidad->Location = System::Drawing::Point(15,35);
			this->nudCantidad->Minimum =1;
			this->nudCantidad->Maximum =100;
			this->nudCantidad->Value =1;
			this->nudCantidad->Name = L"nudCantidad";
			this->nudCantidad->Size = System::Drawing::Size(120,20);
			this->nudCantidad->TabIndex =1;
			this->Controls->Add(this->nudCantidad);

			// OK button
			this->btnOkCantidad = (gcnew System::Windows::Forms::Button());
			this->btnOkCantidad->Location = System::Drawing::Point(15,70);
			this->btnOkCantidad->Name = L"btnOkCantidad";
			this->btnOkCantidad->Size = System::Drawing::Size(75,23);
			this->btnOkCantidad->TabIndex =2;
			this->btnOkCantidad->Text = L"Aceptar";
			this->btnOkCantidad->UseVisualStyleBackColor = true;
			this->btnOkCantidad->Click += gcnew System::EventHandler(this, &boletosForm::btnOkCantidad_Click);
			this->Controls->Add(this->btnOkCantidad);

			// Cancel button
			this->btnCancelCantidad = (gcnew System::Windows::Forms::Button());
			this->btnCancelCantidad->Location = System::Drawing::Point(100,70);
			this->btnCancelCantidad->Name = L"btnCancelCantidad";
			this->btnCancelCantidad->Size = System::Drawing::Size(75,23);
			this->btnCancelCantidad->TabIndex =3;
			this->btnCancelCantidad->Text = L"Cancelar";
			this->btnCancelCantidad->UseVisualStyleBackColor = true;
			this->btnCancelCantidad->Click += gcnew System::EventHandler(this, &boletosForm::btnCancelCantidad_Click);
			this->Controls->Add(this->btnCancelCantidad);
		}
#pragma endregion

	private: System::Void btnOkCantidad_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(String::Format("Cantidad seleccionada: {0}", this->nudCantidad->Value), "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnCancelCantidad_Click(System::Object^ sender, System::EventArgs^ e) {
		this->nudCantidad->Value =1;
	}
	};
}
