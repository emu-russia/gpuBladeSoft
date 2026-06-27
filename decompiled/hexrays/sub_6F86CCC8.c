char __usercall sub_6F86CCC8@<al>(_DWORD *a1@<eax>, unsigned __int8 a2@<dl>, unsigned int a3@<ecx>, int *a4)
{
  unsigned int v4; // esi@1
  _DWORD *v5; // edx@2
  int v6; // eax@2
  signed int v7; // esi@9
  int i; // ebx@9
  unsigned __int8 v9; // dl@10
  int v10; // eax@10
  int v11; // edi@10
  int v12; // edx@12
  void (__cdecl **v13)(_DWORD); // ST1C_4@16
  int v14; // ST28_4@16
  unsigned __int8 v15; // ST2C_1@16
  char v16; // al@18
  int v17; // edi@19
  int v18; // ebx@19
  void (__cdecl **v19)(_DWORD); // edx@25
  char v20; // ST28_1@25
  char result; // al@26
  int v22; // ebx@27
  char *v23; // edx@27
  char *v24; // ecx@27
  signed int v25; // esi@28
  void (__cdecl **v26)(_DWORD); // ST18_4@30
  char *v27; // ST2C_4@30
  char *v28; // ST28_4@30
  void (__cdecl **v29)(_DWORD); // eax@6
  unsigned __int8 v30; // [sp+33h] [bp-545h]@1
  int v31; // [sp+34h] [bp-544h]@9
  int v32; // [sp+3Ch] [bp-53Ch]@19
  int v33; // [sp+40h] [bp-538h]@18
  int v34; // [sp+44h] [bp-534h]@4
  _DWORD *v35; // [sp+48h] [bp-530h]@1
  int v36; // [sp+4Ch] [bp-52Ch]@20
  char v37[1031]; // [sp+58h] [bp-520h]@21
  char v38[281]; // [sp+45Fh] [bp-119h]@13

  v35 = a1;
  v4 = a3;
  v30 = a2;
  if ( a3 > 3 )
  {
    v5 = a1;
    v6 = *a1;
    *(_DWORD *)(v6 + 20) = 52;
    *(_DWORD *)(v6 + 24) = a3;
    (*(void (__cdecl **)(_DWORD *))*v5)(v5);
  }
  if ( v30 )
    v34 = v35[v4 + 30];
  else
    v34 = v35[v4 + 34];
  if ( !v34 )
  {
    v29 = (void (__cdecl **)(_DWORD))*v35;
    v29[5] = (void (__cdecl *)(_DWORD))52;
    v29[6] = (void (__cdecl *)(_DWORD))v4;
    (*(void (__cdecl **)(_DWORD *))*v35)(v35);
  }
  if ( !*a4 )
    *a4 = (*(int (__cdecl **)(_DWORD *, signed int, signed int))v35[1])(v35, 1, 1280);
  v31 = *a4;
  v7 = 1;
  for ( i = 0; ; i = v11 )
  {
    v9 = *(_BYTE *)(v34 + v7);
    v10 = *(_BYTE *)(v34 + v7);
    v11 = i + v10;
    if ( i + v10 > 256 )
    {
      v13 = (void (__cdecl **)(_DWORD))*v35;
      v13[5] = (void (__cdecl *)(_DWORD))9;
      v14 = v10;
      v15 = v9;
      (*v13)(v35);
      v9 = v15;
      if ( !v14 )
      {
LABEL_17:
        v11 = i;
        goto LABEL_14;
      }
    }
    else if ( !*(_BYTE *)(v34 + v7) )
    {
      goto LABEL_17;
    }
    v12 = i + v9;
    do
      v38[i++] = v7;
    while ( i != v12 );
LABEL_14:
    if ( ++v7 == 17 )
      break;
  }
  v33 = v11;
  v38[v11] = 0;
  v16 = v38[0];
  if ( v38[0] )
  {
    v17 = v38[0];
    v32 = v38[0] + 1;
    LOWORD(v7) = 0;
    v18 = 0;
    while ( 1 )
    {
      v36 = v17;
      if ( v17 == v32 - 1 )
      {
        do
        {
          *(_DWORD *)&v37[4 * v18++] = v7++;
          v16 = v38[v18];
          v17 = v38[v18];
        }
        while ( v17 == v36 );
      }
      if ( v7 >= 1 << (v32 - 1) )
      {
        v19 = (void (__cdecl **)(_DWORD))*v35;
        v19[5] = (void (__cdecl *)(_DWORD))9;
        v20 = v16;
        (*v19)(v35);
        v16 = v20;
        ++v32;
        if ( !v20 )
          break;
      }
      else
      {
        ++v32;
        if ( !v16 )
          break;
      }
      v7 *= 2;
    }
  }
  result = 0;
  memset((void *)(v31 + 1024), 0, 0x100u);
  if ( v33 )
  {
    v22 = 0;
    v23 = v38;
    v24 = v37;
    do
    {
      v25 = *(_BYTE *)(v34 + v22 + 17);
      if ( (v30 < 1u ? 255 : 15) < v25 || *(_BYTE *)(v31 + v25 + 1024) )
      {
        v26 = (void (__cdecl **)(_DWORD))*v35;
        v26[5] = (void (__cdecl *)(_DWORD))9;
        v27 = v23;
        v28 = v24;
        (*v26)(v35);
        v24 = v28;
        v23 = v27;
      }
      *(_DWORD *)(v31 + 4 * v25) = *(_DWORD *)&v24[4 * v22];
      result = v23[v22];
      *(_BYTE *)(v31 + v25 + 1024) = result;
      ++v22;
    }
    while ( v33 > v22 );
  }
  return result;
}
