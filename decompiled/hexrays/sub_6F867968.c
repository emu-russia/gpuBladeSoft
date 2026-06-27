int __cdecl sub_6F867968(int a1, char a2)
{
  int v2; // esi@1
  int v3; // ebx@5
  int result; // eax@5
  int v5; // eax@8
  signed int v6; // edx@10
  int v7; // eax@12
  unsigned int v8; // ecx@17
  void *v9; // edx@17
  int v10; // eax@22
  int v11; // ST18_4@18
  int v12; // eax@18
  int v13; // [sp+1Ch] [bp-1Ch]@1

  v13 = *(_DWORD *)(a1 + 440);
  v2 = *(_DWORD *)(v13 + 24);
  if ( *(_DWORD *)(a1 + 76) )
    *(_DWORD *)(a1 + 76) = 2;
  if ( a2 )
  {
    *(_DWORD *)(v13 + 4) = sub_6F86781C;
    *(_DWORD *)(v13 + 8) = sub_6F8687A0;
    *(_BYTE *)(v13 + 28) = 1;
LABEL_5:
    v3 = 0;
    result = 0;
    do
      memset(*(void **)(v2 + 4 * v3++), 0, 0x1000u);
    while ( v3 != 32 );
    *(_BYTE *)(v13 + 28) = 0;
    return result;
  }
  v5 = *(_DWORD *)(a1 + 76);
  if ( v5 == 2 )
    *(_DWORD *)(v13 + 4) = sub_6F868454;
  else
    *(_DWORD *)(v13 + 4) = sub_6F868388;
  *(_DWORD *)(v13 + 8) = sub_6F86794C;
  v6 = *(_DWORD *)(a1 + 112);
  if ( v6 <= 0 )
  {
    v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 20) = 58;
    *(_DWORD *)(v10 + 24) = 1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v5 = *(_DWORD *)(a1 + 76);
  }
  else if ( v6 > 256 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(v7 + 20) = 59;
    *(_DWORD *)(v7 + 24) = 256;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v5 = *(_DWORD *)(a1 + 76);
  }
  if ( v5 == 2 )
  {
    v8 = 6 * *(_DWORD *)(a1 + 92) + 12;
    v9 = *(void **)(v13 + 32);
    if ( !v9 )
    {
      v11 = 6 * *(_DWORD *)(a1 + 92) + 12;
      v12 = (*(int (__cdecl **)(int, signed int, int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, v11);
      *(_DWORD *)(v13 + 32) = v12;
      v9 = (void *)v12;
      v8 = v11;
    }
    memset(v9, 0, v8);
    if ( !*(_DWORD *)(v13 + 40) )
      sub_6F8678AC(a1);
    *(_BYTE *)(v13 + 36) = 0;
  }
  result = v13;
  if ( *(_BYTE *)(v13 + 28) )
    goto LABEL_5;
  return result;
}
