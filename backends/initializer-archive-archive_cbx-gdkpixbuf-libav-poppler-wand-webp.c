/* Auto-Generated file by Make. */
#include "../pqiv.h"
file_type_handler_t file_type_handlers[7 + 1];
void file_type_archive_initializer(file_type_handler_t *info);
void file_type_archive_cbx_initializer(file_type_handler_t *info);
void file_type_gdkpixbuf_initializer(file_type_handler_t *info);
void file_type_libav_initializer(file_type_handler_t *info);
void file_type_poppler_initializer(file_type_handler_t *info);
void file_type_wand_initializer(file_type_handler_t *info);
void file_type_webp_initializer(file_type_handler_t *info);
void initialize_file_type_handlers(const gchar * const * disabled_backends) {
	int i = 0;
	if(!strv_contains(disabled_backends, "gdkpixbuf")) file_type_gdkpixbuf_initializer(&file_type_handlers[i++]);
	if(!strv_contains(disabled_backends, "archive")) file_type_archive_initializer(&file_type_handlers[i++]);
	if(!strv_contains(disabled_backends, "archive_cbx")) file_type_archive_cbx_initializer(&file_type_handlers[i++]);
	if(!strv_contains(disabled_backends, "libav")) file_type_libav_initializer(&file_type_handlers[i++]);
	if(!strv_contains(disabled_backends, "poppler")) file_type_poppler_initializer(&file_type_handlers[i++]);
	if(!strv_contains(disabled_backends, "wand")) file_type_wand_initializer(&file_type_handlers[i++]);
	if(!strv_contains(disabled_backends, "webp")) file_type_webp_initializer(&file_type_handlers[i++]);
}
