signed int __usercall sub_6F85D3D0@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int *v2; // ebx@1
  int v3; // esi@1
  int v4; // edi@3
  int v5; // eax@4
  signed int result; // eax@9
  int v7; // edx@11
  int v8; // edi@13
  __int16 v9; // si@15
  int v10; // eax@2
  char v11; // [sp+18h] [bp-20h]@1
  int v12; // [sp+18h] [bp-20h]@13
  signed int v13; // [sp+1Ch] [bp-1Ch]@4

  v2 = a1;
  v11 = a2;
  v3 = a1[a2 + 22];
  if ( !v3 )
  {
    v10 = *a1;
    *(_DWORD *)(v10 + 20) = 54;
    *(_DWORD *)(v10 + 24) = a2;
    (*(void (__cdecl **)(int *))*v2)(v2);
  }
  v4 = v2[92];
  if ( v4 < 0 )
  {
    v13 = 0;
  }
  else
  {
    v5 = 0;
    v13 = 0;
    do
    {
      if ( *(_WORD *)(v3 + 2 * *(_DWORD *)(v2[91] + 4 * v5)) > 0xFFu )
        v13 = 1;
      ++v5;
    }
    while ( v5 <= v4 );
  }
  if ( *(_BYTE *)(v3 + 128) )
  {
    result = v13;
  }
  else
  {
    sub_6F85D394((int)v2, -37);
    if ( v13 )
      v7 = 2 * v2[92] + 5;
    else
      LOWORD(v7) = v2[92] + 4;
    sub_6F85D3B0((int)v2, v7);
    sub_6F85D350((int)v2, v11 + 16 * v13);
    if ( v2[92] >= 0 )
    {
      v8 = 0;
      v12 = v3;
      do
      {
        v9 = *(_WORD *)(v12 + 2 * *(_DWORD *)(v2[91] + 4 * v8));
        if ( v13 )
          sub_6F85D350((int)v2, SHIBYTE(v9));
        sub_6F85D350((int)v2, v9);
        ++v8;
      }
      while ( v2[92] >= v8 );
      v3 = v12;
    }
    *(_BYTE *)(v3 + 128) = 1;
    result = v13;
  }
  return result;
}
