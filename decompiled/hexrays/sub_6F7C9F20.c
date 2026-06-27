void __cdecl sub_6F7C9F20(int a1, int a2, int a3)
{
  unsigned int v3; // esi@3
  signed int v4; // ebx@3
  unsigned int v5; // edi@6
  signed int v6; // edx@6
  unsigned int v7; // eax@8
  int v8; // eax@9
  signed int v9; // edx@9
  signed int v10; // edx@12
  bool v11; // [sp+2h] [bp-16h]@3
  unsigned int v12; // [sp+4h] [bp-14h]@5
  int v13; // [sp+4h] [bp-14h]@9

  if ( a1 && a2 )
  {
    v3 = *(_DWORD *)a1;
    v4 = a3 << 16;
    v11 = *(_DWORD *)a1 == 0;
    if ( a3 << 16 == *(_DWORD *)a2 || *(_DWORD *)a1 == 0 )
      v12 = *(_DWORD *)a1;
    else
      v12 = sub_6F7C9220(v3, *(_DWORD *)a2, a3 << 16);
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(a2 + 4);
    if ( v4 == v6 || v5 == 0 )
      v7 = *(_DWORD *)(a1 + 4);
    else
      v7 = sub_6F7C9220(v5, v6, v4);
    v13 = v12 + v7;
    v8 = a2;
    v9 = *(_DWORD *)(a2 + 8);
    if ( v4 != v9 && !v11 )
    {
      v3 = sub_6F7C9220(v3, v9, v4);
      v8 = a2;
    }
    v10 = *(_DWORD *)(v8 + 12);
    if ( v4 != v10 && v5 != 0 )
      v5 = sub_6F7C9220(v5, v10, v4);
    *(_DWORD *)(a1 + 4) = v5 + v3;
    *(_DWORD *)a1 = v13;
  }
}
