unsigned int sub_6F71ED80()
{
  int v0; // edx@1
  int v1; // ebp@4
  int v2; // edi@5
  int v3; // edx@12
  unsigned int result; // eax@12
  unsigned int v5; // edx@13
  unsigned int v6; // [sp+Ch] [bp-20h]@4
  signed int v7; // [sp+10h] [bp-1Ch]@3
  signed int v8; // [sp+18h] [bp-14h]@3

  v0 = dword_6FBB52FC;
  if ( dword_6FBB7554 && HIBYTE(word_6FBB979C) & 2 )
  {
    v7 = 64;
    v8 = 1;
  }
  else
  {
    v8 = (unsigned int)dword_6FBB7554 >> 1 != 0;
    v7 = v8 << 6;
  }
  v1 = (HIBYTE(word_6FBB979C) >> 3) & 1;
  v6 = ((unsigned int)dword_6FD3FFC0[0] >> 26) & 1;
  if ( v6 )
  {
    dword_6FD413F0 = 1;
    if ( dword_6FBB7558 )
      dword_6FD412E0 = 0;
    if ( dword_6FBB755C )
    {
      dword_6FD413F0 = 0;
      memset(byte_6FD412F0, 0xFFu, 0x100u);
    }
    v2 = dword_6FBB5300;
    dword_6FBBDBDC = dword_6FD40984 & ((signed int)(unsigned __int16)word_6FD41404 >> 6);
    dword_6FBBDBD8 = 16 * ((unsigned __int16)word_6FD41404 & ((unsigned int)dword_6FD40988 >> 4));
    if ( dword_6FBB5300 != 1 )
      goto LABEL_6;
LABEL_32:
    dword_6FCFFE50 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F71EA70;
    goto LABEL_9;
  }
  v2 = dword_6FBB5300;
  if ( dword_6FBB5300 == 1 )
    goto LABEL_32;
LABEL_6:
  if ( v2 == 2 )
  {
    dword_6FCFFE50 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F71EAB0;
  }
  else if ( !v2 )
  {
    dword_6FCFFE50 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))nullsub_4;
  }
LABEL_9:
  if ( dword_6FBB52FC > 2 )
  {
    if ( dword_6FBB52FC != 3 )
      goto LABEL_26;
LABEL_22:
    v0 = 2048;
    goto LABEL_12;
  }
  if ( dword_6FBB52FC <= 0 )
  {
    if ( !dword_6FBB52FC )
      goto LABEL_12;
    goto LABEL_26;
  }
  if ( !((byte_6FD40960 - 48) & 0xD0) )
  {
    if ( dword_6FBB52FC == 1 )
    {
      v0 = 1024;
      if ( !v8 )
        goto LABEL_12;
    }
    goto LABEL_22;
  }
LABEL_26:
  v0 = (dword_6FBB52FC != 0) << 10;
LABEL_12:
  v3 = (((HIBYTE(word_6FBB979C) >> 4) & 1) << 9) | v0;
  result = dword_6FBB9558;
  if ( dword_6FBB9558 )
  {
    v5 = v1 | v3 | 0x20;
  }
  else
  {
    result = 16 * v6;
    v5 = dword_6FBBDBFC[8 * (unsigned __int8)byte_6FD40960] & (v7 | ((unsigned int)dword_6FD3FFC0[0] >> 22) & 8 | 16 * v6 | v1 | 2 * dword_6FBBDBB4 | (dword_6FBBDBB8 << 7) | ((unsigned int)dword_6FD3FFC0[0] >> 19) & 0x20 | v3);
  }
  dword_6FBB5058 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))off_6FB4EC80[v5];
  if ( dword_6FBB755C && dword_6FBB9584 == 1 )
  {
    dword_6FD413F8 = sub_6F69F380;
    dword_6FD413FC = sub_6F69F440;
    dword_6FD41400 = sub_6F69F4F0;
  }
  else if ( dword_6FBB52F4 == 1 )
  {
    dword_6FD413F8 = sub_6F69F2D0;
    dword_6FD413FC = sub_6F69F250;
    dword_6FD41400 = sub_6F69F1E0;
  }
  else
  {
    dword_6FD413F8 = sub_6F69F130;
    dword_6FD413FC = sub_6F69F080;
    dword_6FD41400 = sub_6F69EFE0;
  }
  dword_6FBBFE44 = sub_6F69EF70;
  dword_6FBBFE40 = sub_6F69EF30;
  dword_6FBBFE48 = sub_6F69EF00;
  if ( dword_6FBB9568 )
  {
    dword_6FBBFE44 = sub_6F69EFB0;
    dword_6FBBFE40 = sub_6F69EFB0;
    dword_6FBBFE48 = sub_6F69EFB0;
  }
  return result;
}
