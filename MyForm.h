#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
















	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(702, 185);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(244, 212);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingresar Jugador 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraceña";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(75, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(49, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(136, 28);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(49, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 28);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(163, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Entrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Enabled = false;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::Black;
			this->groupBox3->Location = System::Drawing::Point(130, 185);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox3->Size = System::Drawing::Size(244, 212);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ingresar Jugador 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(99, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contraceña";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(99, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nombre";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(67, 136);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(133, 28);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox3_KeyUp);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(67, 65);
			this->textBox4->Name = L"textBox4";
			this->textBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox4->Size = System::Drawing::Size(133, 28);
			this->textBox4->TabIndex = 1;
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyUp);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(6, 170);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 36);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Entrar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(288, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(195, 90);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Jugador 1(Preparado)";
			this->groupBox2->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(139, 42);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 42);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(605, 21);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox4->Size = System::Drawing::Size(195, 90);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Jugador 2(Preparado)";
			this->groupBox4->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(6, 42);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 42);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(475, 219);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 114);
			this->button6->TabIndex = 12;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(192, 86);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1084, 461);
			this->panel1->TabIndex = 14;
			this->panel1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1084, 461);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		int ComaPos(String^ miLinea) {
			int i = 0;
			while (i< miLinea->Length)
			{
				if (miLinea->Substring(i, 1)->Equals(",")){
					return i;
				}
				i++;
			}

		}

		String^ ContraceñaFile(String^ miLinea){
			String^ a = "";
			for (int i =(ComaPos(miLinea)+1); i <= miLinea->Length; i++)
			{
				 a = a + a->Substring(i);
			}
			return a;
		}

		int ValidarDatos(TextBox^ Usuario,TextBox^ Contraceña){
			String^ usuario = Usuario->Text;
			String^ contraceña = Contraceña->Text;
			String^ path = L"C:\\Users\\jdavi\\OneDrive\\Universidad\\Semestre III\\Estructura de Datos\\Project1\\Archivos\\myFile.txt";
			String^ linea;
			int sw = 0, posComa;

			if (Usuario->Text->Trim(' ')->Length >0 && Contraceña->Text->Trim(' ')->Length>0){

				try {

					FileStream^ fs = gcnew FileStream(path, FileMode::Open);

					StreamReader^ sr = gcnew StreamReader(fs);

					while ((sr->Peek() >= 0) && (sw == 0))
					{
						linea = Convert::ToString(sr->ReadLine());
						posComa = ComaPos(linea);
						if (linea->Substring(0, posComa)->Equals(usuario)) {
							sw = 1;
						}
					}
					sr->Close();
				}
				catch (Exception^ e) {
					Console::WriteLine("The process failed: {0}", e->ToString());
				}

				if (sw == 1){
					String^ a = linea->Substring(posComa + 1, (linea->Length) - (posComa + 1));
					if (a->Equals(contraceña)) {
						return sw;
					}else{
						MessageBox::Show("contraceña incorrecta", "Error", MessageBoxButtons::OK);
						sw = 0;
					}
				}
				else{
					MessageBox::Show("Por favor rejistrece primero", "Error", MessageBoxButtons::OK);
				}

			}
			else{
				MessageBox::Show("llene los campos requeridos", "Error");
			}

			return sw;
		}

		void rejistrarce(){
		
		}


		void caracteresEspeciales(String^ texto,TextBox^ textBox){
			char k;
			int x;
			k = Convert::ToChar(texto->Substring(texto->Length - 1, 1));
			x = k;
			if(x<48 || x>57 && x<64 || x>90 && x<96 || x>122){
				textBox->Text = "";
			}
		}

		void diseño(){
			groupBox1->BackColor = Color::FromArgb(140, 120, 100, 100);
			groupBox3->BackColor = Color::FromArgb(140, 120, 100, 100);
			button3->BackColor = Color::FromArgb(140, 120, 100, 100);

		}

		void JugadorListo(GroupBox^ Listo, String^ Nombre){
			Listo->Visible = true;
			Listo->Text = Nombre + "-Preparado";
		}

		void PreparadoCancelar(GroupBox^ jugador1, GroupBox^ jugador2,GroupBox^ preparado){
			jugador1->Visible = true;
			preparado->Visible = false;
			if (jugador1->Enabled == true){
				jugador2->Enabled = false;
			}
			if (groupBox2->Visible == false || groupBox4->Visible == false){
				button6->Visible = false;
			}
			
		}

		bool validarUsuario(TextBox^ Player1, TextBox^ Player2){
			if (!Player1->Text->Equals(Player2->Text)){
				return true;
			}
			else{
				return false;
			}
		}

#pragma endregion



private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 caracteresEspeciales(Convert::ToString(sender), textBox1);
}
private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 caracteresEspeciales(Convert::ToString(sender), textBox2);
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (validarUsuario(textBox1, textBox4) || (textBox1->Text->Trim(' ')->Equals("")==true)){
				 int sw = ValidarDatos(textBox4, textBox3);
				 if (sw == 1){
					 rejistrarce();
					 groupBox3->Visible = false;
					 JugadorListo(groupBox4, textBox4->Text);
					 if (groupBox1->Enabled == false){
						 groupBox1->Enabled = true;
					 }
					 if (groupBox2->Visible == true && groupBox4->Visible == true){
						 button6->Visible = true;
					 }
				 }
			 }
			 else{
				 MessageBox::Show("Escoja un 'Nombre' Diferente", "Error", MessageBoxButtons::OK);
				 textBox4->Text = "";
				 textBox3->Text = "";
			 }
			
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if (validarUsuario(textBox1, textBox4) || (textBox1->Text->Trim(' ')->Equals("") == true)){
				 int sw = ValidarDatos(textBox1, textBox2);

				 if (sw == 1){
					 groupBox1->Visible = false;
					 groupBox3->Enabled = true;
					 JugadorListo(groupBox2, textBox1->Text);
					 if (groupBox2->Visible == true && groupBox4->Visible == true){
						 button6->Visible = true;
					 }
				 }
			 }
			 else{
				 MessageBox::Show("Escoja un 'Nombre' Diferente", "Error", MessageBoxButtons::OK);
				 textBox1->Text = "";
				 textBox2->Text = "";
			 }
}
private: System::Void textBox4_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			  caracteresEspeciales(Convert::ToString(sender), textBox3);
}
private: System::Void textBox3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 caracteresEspeciales(Convert::ToString(sender), textBox3);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 PreparadoCancelar(groupBox1,groupBox3,groupBox2);
			 
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 PreparadoCancelar(groupBox3, groupBox1, groupBox4);
}
};
}
