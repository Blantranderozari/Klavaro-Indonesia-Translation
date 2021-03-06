/**************************************************************************/
/*  Klavaro - a flexible touch typing tutor                               */
/*  Copyright (C) 2005-2021 Felipe Emmanuel Ferreira de Castro            */
/*                                                                        */
/*  This file is part of Klavaro, which is a free software: you can       */
/*  redistribute it and/or modify it under the terms of the GNU General   */
/*  Public License as published by the Free Software Foundation, either   */
/*  version 3 of the License, or (at your option) any later version.      */
/*                                                                        */
/*  Klavaro is distributed in the hope that it will be useful,            */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/*  GNU General Public License for more details (in the file COPYING).    */
/*  You should have received a copy of the GNU General Public License     */
/*  along with Klavaro.  If not, see <https://www.gnu.org/licenses/>      */
/**************************************************************************/

#include <gtkdatabox.h>

#define TEXTMAXLEN 8000

void callbacks_shield_set (gboolean state);


void on_button_basic_clicked (GtkButton *button, gpointer user_data);

void on_button_adapt_clicked (GtkButton *button, gpointer user_data);

void on_button_velo_clicked (GtkButton *button, gpointer user_data);

void on_button_fluid_clicked (GtkButton *button, gpointer user_data);


void on_virtual_key_clicked (GtkButton * button, gpointer user_data);

void on_virtual_key_changed (GtkEditable *edit, gpointer user_data);

void on_virtual_key_grab_focus (GtkWidget *wg, gpointer user_data);

void on_virtual_key_focus_out (GtkWidget *wg, gpointer user_data);


gboolean on_entry_mesg_focus_out_event (GtkWidget * widget, GdkEventFocus * event, gpointer user_data);

void on_entry_mesg_grab_focus (GtkWidget * widget, gpointer user_data);

void on_entry_mesg_activate (GtkEntry * entry, gpointer user_data);

void on_entry_mesg_delete_text (GtkEditable * editable, gint start_pos, gint end_pos, gpointer user_data);

void on_entry_mesg_insert_text (GtkEditable * editable, gchar * new_text, gint new_text_length, gpointer position, gpointer user_data);

void on_entry_mesg_preedit_changed (GtkEntry * entry, gchar * preedit, gpointer user_data);

gboolean on_entry_mesg_drag_drop (GtkWidget * widget, GdkDragContext * drag_context, gint x, gint y, guint time, gpointer user_data);


void on_combobox_stat_module_changed (GtkComboBox *cmb, gpointer user_data);

void on_combobox_stat_type_changed (GtkComboBox *cmb, gpointer user_data);

void on_button_confirm_yes_clicked (GtkButton *button, gpointer user_data);

void on_button_other_apply_clicked (GtkButton *button, gpointer user_data);

void on_databox_hovered (GtkDatabox *dbox, GdkEventMotion *event, gpointer user_data);


void window_restore (gchar *who);

void window_save (gchar *who);


