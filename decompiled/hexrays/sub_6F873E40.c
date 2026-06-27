int __usercall sub_6F873E40@<eax>(_DWORD *a1@<eax>, char a2@<dl>, unsigned int a3@<ecx>, int *a4)
{
  unsigned int v4; // edi@1
  _DWORD *v5; // edx@2
  int v6; // eax@2
  int v7; // ebx@4
  void (__cdecl **v8)(_DWORD); // eax@6
  int v9; // esi@9
  signed int v10; // edi@9
  int v11; // esi@9
  int v12; // eax@10
  void (__cdecl **v13)(_DWORD); // edx@11
  int v14; // edx@13
  int v15; // esi@17
  signed int v16; // eax@17
  int v17; // edi@17
  int v18; // ecx@18
  signed int v19; // eax@25
  int v20; // ecx@25
  void (__cdecl **v21)(_DWORD); // edx@22
  signed int v22; // ST1C_4@22
  signed int v23; // edx@30
  int result; // eax@30
  int v25; // edi@33
  int v26; // ecx@34
  int v27; // esi@39
  void (__cdecl **v28)(_DWORD); // eax@43
  char v29; // [sp+23h] [bp-545h]@1
  int v30; // [sp+24h] [bp-544h]@17
  char v31; // [sp+2Ch] [bp-53Ch]@32
  _DWORD *v32; // [sp+30h] [bp-538h]@1
  int v33; // [sp+34h] [bp-534h]@9
  signed int v34; // [sp+34h] [bp-534h]@32
  int v35; // [sp+38h] [bp-530h]@10
  signed int v36; // [sp+38h] [bp-530h]@32
  unsigned __int8 v37; // [sp+3Ch] [bp-52Ch]@10
  int v38; // [sp+3Ch] [bp-52Ch]@17
  int v39; // [sp+44h] [bp-524h]@26
  int v40[257]; // [sp+48h] [bp-520h]@20
  char v41[281]; // [sp+44Fh] [bp-119h]@14

  v32 = a1;
  v4 = a3;
  v29 = a2;
  if ( a3 > 3 )
  {
    v5 = a1;
    v6 = *a1;
    *(_DWORD *)(v6 + 20) = 52;
    *(_DWORD *)(v6 + 24) = a3;
    (*(void (__cdecl **)(_DWORD *))*v5)(v5);
  }
  if ( v29 )
    v7 = v32[v4 + 40];
  else
    v7 = v32[v4 + 44];
  if ( !v7 )
  {
    v8 = (void (__cdecl **)(_DWORD))*v32;
    v8[5] = (void (__cdecl *)(_DWORD))52;
    v8[6] = (void (__cdecl *)(_DWORD))v4;
    (*(void (__cdecl **)(_DWORD *))*v32)(v32);
  }
  if ( !*a4 )
    *a4 = (*(int (__cdecl **)(_DWORD *, signed int, signed int))v32[1])(v32, 1, 1424);
  v9 = *a4;
  *(_DWORD *)(v9 + 140) = v7;
  v10 = 1;
  v33 = v9;
  v11 = 0;
  do
  {
    v37 = *(_BYTE *)(v7 + v10);
    v12 = v37;
    v35 = v11 + v37;
    if ( v35 > 256 )
    {
      v13 = (void (__cdecl **)(_DWORD))*v32;
      v13[5] = (void (__cdecl *)(_DWORD))9;
      (*v13)(v32);
      v12 = v37;
    }
    if ( v12 )
    {
      v14 = v11 + v37;
      do
        v41[v11++] = v10;
      while ( v11 != v14 );
      v11 = v35;
    }
    ++v10;
  }
  while ( v10 != 17 );
  v30 = v11;
  v15 = v33;
  v41[v30] = 0;
  v38 = v41[0] + 1;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    LOBYTE(v18) = v41[v17];
    if ( !(_BYTE)v18 )
      break;
    v18 = (char)v18;
    if ( (char)v18 == v38 - 1 )
    {
      do
        v40[v17++] = v16++;
      while ( v41[v17] == v18 );
    }
    if ( v16 >= 1 << (v38 - 1) )
    {
      v21 = (void (__cdecl **)(_DWORD))*v32;
      v21[5] = (void (__cdecl *)(_DWORD))9;
      v22 = v16;
      (*v21)(v32);
      v16 = v22;
    }
    v16 *= 2;
    ++v38;
  }
  v19 = 1;
  v20 = 0;
  do
  {
    if ( *(_BYTE *)(v7 + v19) )
    {
      *(_DWORD *)(v33 + 4 * v19 + 72) = v20 - v40[v20];
      v20 += *(_BYTE *)(v7 + v19);
      *(_DWORD *)(v33 + 4 * v19) = *(&v39 + v20);
    }
    else
    {
      *(_DWORD *)(v33 + 4 * v19) = -1;
    }
    ++v19;
  }
  while ( v19 != 17 );
  *(_DWORD *)(v33 + 68) = 0xFFFFF;
  memset((void *)(v33 + 144), 0, 0x400u);
  v23 = 1;
  result = 0;
  do
  {
    if ( *(_BYTE *)(v7 + v23) )
    {
      v31 = 8 - v23;
      v34 = 1 << (8 - v23);
      v36 = 1;
      do
      {
        v25 = v40[result];
        if ( v34 > 0 )
        {
          v26 = v25 << v31;
          do
          {
            *(_DWORD *)(v15 + 4 * v26 + 144) = v23;
            *(_BYTE *)(v15 + v26++ + 1168) = *(_BYTE *)(v7 + result + 17);
          }
          while ( v26 != (v25 << v31) + v34 );
        }
        ++v36;
        ++result;
      }
      while ( *(_BYTE *)(v7 + v23) >= v36 );
    }
    ++v23;
  }
  while ( v23 != 9 );
  if ( v29 )
  {
    v27 = 0;
    while ( v27 < v30 )
    {
      if ( *(_BYTE *)(v7 + v27 + 17) > 0xFu )
      {
        v28 = (void (__cdecl **)(_DWORD))*v32;
        v28[5] = (void (__cdecl *)(_DWORD))9;
        result = ((int (__cdecl *)(_DWORD *))*v28)(v32);
        ++v27;
      }
      else
      {
        ++v27;
      }
    }
  }
  return result;
}
