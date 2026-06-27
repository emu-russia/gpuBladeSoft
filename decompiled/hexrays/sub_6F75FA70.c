int sub_6F75FA70()
{
  int *v0; // edi@1
  int v1; // ecx@4
  int v2; // ebx@4
  int v3; // eax@6
  int v4; // ecx@8
  int v5; // eax@10
  int v6; // ecx@12
  int result; // eax@14
  int v8; // ecx@16
  char v9; // [sp+70h] [bp-20h]@3

  v0 = dword_7035CCC4;
  do
  {
    if ( *v0 )
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)*v0 + 36))(*v0, 20, &v9);
    v1 = v0[34];
    v2 = (int)(v0 + 34);
    if ( v1 )
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)v1 + 36))(v1, 20, &v9);
    v3 = v0[68];
    if ( v3 )
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)v3 + 36))(v3, 20, &v9);
    v4 = v0[102];
    if ( v4 )
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)v4 + 36))(v4, 20, &v9);
    v5 = v0[136];
    if ( v5 )
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)v5 + 36))(v5, 20, &v9);
    v6 = v0[170];
    if ( v6 )
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)v6 + 36))(v6, 20, &v9);
    result = v0[204];
    if ( result )
      result = (*(int (__stdcall **)(int, signed int, char *))(*(_DWORD *)result + 36))(result, 20, &v9);
    v8 = v0[238];
    if ( v8 )
      result = (*(int (__stdcall **)(int, signed int, char *))(*(_DWORD *)v8 + 36))(v8, 20, &v9);
    v0 += 272;
  }
  while ( (_UNKNOWN *)(v2 + 952) != &unk_7035D544 );
  return result;
}
