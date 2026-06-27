int __cdecl sub_6F7693C0(int a1, int *a2)
{
  signed int v2; // ebx@1
  int v3; // eax@2
  int v4; // ebp@3
  _DWORD *v5; // eax@3
  int v6; // edi@3
  int v8; // edx@7
  _DWORD *v9; // eax@7
  int v10; // ecx@8
  int v11; // edx@8
  int (__thiscall *v12)(int); // eax@9
  int v13; // eax@13
  int v14; // [sp+14h] [bp-38h]@7
  int **v15; // [sp+18h] [bp-34h]@7
  int v16; // [sp+1Ch] [bp-30h]@7
  int v17; // [sp+28h] [bp-24h]@3
  int v18; // [sp+2Ch] [bp-20h]@7

  v2 = 35;
  if ( !a1 )
    return v2;
  v3 = *(_DWORD *)(a1 + 96);
  v2 = 6;
  if ( !v3 )
    return v2;
  v4 = *(_DWORD *)(v3 + 8);
  v5 = sub_6F773A50(v4, *(_DWORD *)(*(_DWORD *)(v3 + 12) + 44), &v17);
  v2 = v17;
  v6 = (int)v5;
  if ( v17 )
  {
    if ( a2 )
      *a2 = 0;
    return v2;
  }
  v8 = *(_DWORD *)(a1 + 96);
  v5[1] = a1;
  v18 = 0;
  v15 = (int **)v8;
  v16 = *(_DWORD *)(v8 + 12);
  v14 = *(_DWORD *)(v8 + 8);
  *v5 = *(_DWORD *)(v8 + 4);
  v9 = sub_6F773A50(v14, 40, &v18);
  v2 = v18;
  if ( v18 )
    goto LABEL_15;
  *(_DWORD *)(v6 + 156) = v9;
  v10 = v14;
  v11 = **v15;
  if ( !(BYTE1(v11) & 2) )
  {
    v13 = sub_6F7CA1E0(v14, v9);
    v18 = v13;
    if ( v13 )
    {
      v2 = v13;
LABEL_15:
      v17 = v2;
LABEL_16:
      sub_6F768BE0(v6);
      sub_6F773D90(v4, v6);
      return v17;
    }
  }
  v12 = *(int (__thiscall **)(int))(v16 + 64);
  if ( v12 )
  {
    v17 = v12(v10);
    if ( v17 )
      goto LABEL_16;
  }
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 84) = v6;
  if ( a2 )
    *a2 = v6;
  return v2;
}
