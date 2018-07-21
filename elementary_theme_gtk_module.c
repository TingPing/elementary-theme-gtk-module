#include <gtk/gtk.h>

G_MODULE_EXPORT void
gtk_module_init (int *argc, char ***argv[])
{
  GtkSettings *settings = gtk_settings_get_default();
  g_object_set (settings, "gtk-theme-name", "elementary", NULL);
}

G_MODULE_EXPORT char *
g_module_check_init (GModule *module)
{
  g_module_make_resident (module);
  return NULL;
}