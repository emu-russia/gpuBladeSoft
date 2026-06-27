int __usercall sub_6F723BB0@<eax>(unsigned __int16 a1@<ax>)
{
  int v1; // ecx@3
  int result; // eax@5

  if ( dword_6FD40990 == 2 )
  {
    *(_DWORD *)&word_6FBB979C = *(_DWORD *)&word_6FBB979C & 0xFFFFFE00 | a1 & 0x1FF;
    dword_6FBBDBB0 = 16 * a1 & 0x100;
    dword_6FBBDBC4 = ((signed int)a1 >> 2) & 0x200;
    dword_6FBBDBAC = (a1 << 6) & 0x3C0;
    dword_6FBBDBB8 = ((signed int)a1 >> 7) & 3;
    dword_6FBBDBB4 = ((signed int)a1 >> 5) & 3;
    nullsub_10();
    nullsub_10();
    nullsub_10();
    nullsub_10();
    if ( dword_6FBBDBB8 != 3 )
      goto LABEL_5;
    goto LABEL_10;
  }
  *(_DWORD *)&word_6FBB979C = a1 & 0x7FF | *(_DWORD *)&word_6FBB979C & 0xFFFFF800;
  dword_6FBBDBC4 = 8 * a1 & 0x200;
  dword_6FBBDBB8 = ((signed int)a1 >> 9) & 3;
  dword_6FBBDBAC = (a1 << 6) & 0x3C0;
  dword_6FBBDBB0 = 8 * a1 & 0x100;
  dword_6FBBDBB4 = ((signed int)a1 >> 7) & 3;
  dword_6FBBDBD0 = ((signed int)a1 >> 13) & 1;
  nullsub_10();
  nullsub_10();
  nullsub_10();
  nullsub_10();
  nullsub_10();
  if ( dword_6FBBDBD0 )
  {
    nullsub_10();
    v1 = dword_6FBBDBB8;
    if ( dword_6FBBDBB8 == 2 )
    {
      if ( !dword_6FBBDBD0 )
        goto LABEL_5;
      nullsub_10();
      v1 = dword_6FBBDBB8;
    }
LABEL_4:
    if ( v1 != 3 )
      goto LABEL_5;
LABEL_10:
    nullsub_10();
    dword_6FBBDBB8 = 2;
    goto LABEL_5;
  }
  v1 = dword_6FBBDBB8;
  if ( dword_6FBBDBB8 != 2 )
    goto LABEL_4;
LABEL_5:
  result = dword_6FD40984 & (dword_6FBBDBB0 + dword_6FBBDBC4);
  dword_6FBBDBD4 = dword_6FBB5068
                 + 2 * dword_6FBB52F4 * (result * dword_6FBB52F8 * dword_6FBB51DC + (dword_6FD40988 & dword_6FBBDBAC));
  return result;
}
