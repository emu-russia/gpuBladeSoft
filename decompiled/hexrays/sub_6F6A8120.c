int sub_6F6A8120()
{
  int *v0; // edx@3
  int v1; // esi@4
  int v2; // ebx@4
  unsigned int v3; // ecx@4
  unsigned int v4; // eax@5
  bool v5; // zf@5
  int v6; // ebx@5
  unsigned int v7; // ebx@8
  int *v8; // edi@10
  int (__cdecl *v9)(int); // ecx@13
  int *v11; // eax@25
  int *v12; // ecx@25
  int *v13; // [sp+18h] [bp-34h]@3
  unsigned int v14; // [sp+1Ch] [bp-30h]@11
  unsigned int v15; // [sp+20h] [bp-2Ch]@3

  dword_6FD412E0 = 0;
  if ( dword_6FBB52F4 == 1 )
  {
    dword_70041C38 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F69F5A0;
    dword_70041C34 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F69F5E0;
    dword_70041C30 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F69F620;
  }
  else
  {
    dword_70041C38 = sub_6F69F660;
    dword_70041C34 = sub_6F69F730;
    dword_70041C30 = sub_6F69F800;
  }
  v0 = &dword_6FBB6554;
  memset(byte_6FD412F0, 0xFFu, 0x100u);
  v13 = (int *)&v15;
  do
  {
    v1 = *v0;
    ++v0;
    v2 = ~v1 & (v1 - 16843009);
    v3 = v2 & 0x80808080;
  }
  while ( !(v2 & 0x80808080) );
  v4 = v3 >> 16;
  v5 = (unsigned __int16)(v2 & 0x8080) == 0;
  v6 = (int)v0 + 2;
  if ( !v5 )
  {
    LOBYTE(v4) = v3;
    if ( !v5 )
      v6 = (int)v0;
  }
  v7 = v6 - ((_DWORD)&dword_6FBB6554 + __CFADD__((_BYTE)v4, (_BYTE)v4) + 3);
  if ( v7 > 0xF )
  {
    v11 = (int *)sub_6F961B60(v7 + 1);
    v15 = v7;
    v13 = v11;
    v12 = v11;
  }
  else
  {
    if ( v7 == 1 )
    {
      v8 = (int *)&v15;
      LOBYTE(v15) = dword_6FBB6554;
      goto LABEL_11;
    }
    if ( !v7 )
    {
      v8 = (int *)&v15;
      goto LABEL_11;
    }
    v12 = (int *)&v15;
  }
  if ( v7 >= 4 )
  {
    *v12 = dword_6FBB6554;
    *(int *)((char *)v12 + v7 - 4) = *(_DWORD *)((char *)&unk_6FBB6550 + v7);
    qmemcpy(
      (void *)((unsigned int)(v12 + 1) & 0xFFFFFFFC),
      (const void *)((char *)&dword_6FBB6554 - ((char *)v12 - ((unsigned int)(v12 + 1) & 0xFFFFFFFC))),
      4 * (((unsigned int)v12 + v7 - ((unsigned int)(v12 + 1) & 0xFFFFFFFC)) >> 2));
  }
  else if ( v7 )
  {
    *(_BYTE *)v12 = dword_6FBB6554;
    if ( v7 & 2 )
      *(_WORD *)((char *)v12 + v7 - 2) = *(_WORD *)((char *)&unk_6FBB6552 + v7);
  }
  v8 = v13;
LABEL_11:
  v14 = v7;
  *((_BYTE *)v8 + v7) = 0;
  sub_6F6980C0(&v13);
  if ( (unsigned int *)v13 != &v15 )
    j_free_1(v13);
  v9 = sub_6F69F350;
  if ( dword_6FBB7558 )
    v9 = sub_6F72A3A0;
  dword_70041C3C = (int)v9;
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
  dword_6FD413F0 = 1;
  word_6FD41404 = 0;
  memset(byte_6FD412F0, 0xFFu, 0x100u);
  dword_6FD412E0 = 0;
  sub_6F759390(&dword_6FBBDB5C, (int)&unk_6F96D040);
  return 0;
}
