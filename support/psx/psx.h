#ifndef PSX_H
#define PSX_H

void psx_mount_cd(int f_index, int s_index, const char *filename);
void psx_fill_blanksave(uint8_t *buffer, uint32_t lba, int cnt);

#endif
