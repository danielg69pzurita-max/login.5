#pragma once

namespace proyectoZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VerEmpleado
	/// </summary>
	public ref class VerEmpleado : public System::Windows::Forms::Form
	{
	public:
		VerEmpleado(void)
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
		~VerEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Empleado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cargo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sueldo;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VerEmpleado::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Empleado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cargo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sueldo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Empleado,
					this->Cargo, this->Sueldo
			});
			this->dataGridView1->Location = System::Drawing::Point(130, 124);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(344, 38);
			this->dataGridView1->TabIndex = 0;
			// 
			// Empleado
			// 
			this->Empleado->HeaderText = L"Empleado";
			this->Empleado->MinimumWidth = 10;
			this->Empleado->Name = L"Empleado";
			this->Empleado->Width = 200;
			// 
			// Cargo
			// 
			this->Cargo->HeaderText = L"Cargo";
			this->Cargo->MinimumWidth = 10;
			this->Cargo->Name = L"Cargo";
			this->Cargo->Width = 200;
			// 
			// Sueldo
			// 
			this->Sueldo->HeaderText = L"Sueldo";
			this->Sueldo->MinimumWidth = 10;
			this->Sueldo->Name = L"Sueldo";
			this->Sueldo->Width = 200;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(203, 22);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(172, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// VerEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(610, 369);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"VerEmpleado";
			this->Text = L"VerEmpleado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
