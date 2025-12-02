#include "MenuDueño.h"
#include "administrador.h"

namespace proyectoZoo {

void MenuDueño::toolStripButtonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuDueño^ self = safe_cast<MenuDueño^>(sender ? ((ToolStripItem^)sender)->Owner->FindForm() : nullptr);
	if (self == nullptr) {
		// fallback: create form and show admin
		MenuDueño^ m = gcnew MenuDueño();
		m->Hide();
		proyectoZoo::administrador^ adm = gcnew proyectoZoo::administrador();
		adm->ShowDialog();
		m->Show();
		return;
	}
	self->Hide();
	proyectoZoo::administrador^ adm = gcnew proyectoZoo::administrador();
	adm->ShowDialog();
	self->Show();
}

void MenuDueño::administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuDueño^ self = nullptr;
	ToolStripMenuItem^ item = dynamic_cast<ToolStripMenuItem^>(sender);
	if (item != nullptr) {
		self = safe_cast<MenuDueño^>(item->Owner->FindForm());
	}
	if (self == nullptr) return;
	self->Hide();
	proyectoZoo::administrador^ adm = gcnew proyectoZoo::administrador();
	adm->ShowDialog();
	self->Show();
}

} // namespace proyectoZoo

