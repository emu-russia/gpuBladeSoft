_DWORD *__usercall sub_6F85D500@<eax>(_DWORD *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // esi@2
  signed int v5; // eax@8
  signed int v6; // edi@8
  signed int v7; // ebx@10
  int v8; // eax@4
  _DWORD *v9; // [sp+1Ch] [bp-1Ch]@1

  v9 = result;
  v3 = a2;
  if ( a3 )
  {
    v4 = result[a2 + 34];
    v3 = a2 + 16;
  }
  else
  {
    v4 = result[a2 + 30];
  }
  if ( !v4 )
  {
    v8 = *result;
    *(_DWORD *)(v8 + 20) = 52;
    *(_DWORD *)(v8 + 24) = v3;
    result = (_DWORD *)(*(int (__cdecl **)(_DWORD *))*v9)(v9);
  }
  if ( !*(_BYTE *)(v4 + 273) )
  {
    sub_6F85D394((int)v9, -60);
    v5 = 1;
    v6 = 0;
    do
      v6 += *(_BYTE *)(v4 + v5++);
    while ( v5 != 17 );
    sub_6F85D3B0((int)v9, v6 + 19);
    sub_6F85D350((int)v9, v3);
    v7 = 1;
    do
      result = (_DWORD *)sub_6F85D350((int)v9, *(_BYTE *)(v4 + v7++));
    while ( v7 != 17 );
    if ( v6 )
    {
      LOBYTE(v7) = 0;
      do
        result = (_DWORD *)sub_6F85D350((int)v9, *(_BYTE *)(v4 + v7++ + 17));
      while ( v7 < v6 );
    }
    *(_BYTE *)(v4 + 273) = 1;
  }
  return result;
}
