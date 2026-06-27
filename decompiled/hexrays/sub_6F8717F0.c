int __cdecl sub_6F8717F0(int a1, char a2)
{
  int v2; // ebx@2
  int v3; // edi@3
  int (__cdecl *v4)(int, signed int, signed int, int, int, int); // ST28_4@5
  int v5; // ST20_4@5
  int v6; // eax@5
  signed int v7; // eax@7
  int result; // eax@9
  int v9; // eax@10
  void *v10; // edx@10
  int v11; // ecx@10
  int v12; // ebx@10
  int v13; // [sp+24h] [bp-24h]@4
  int v14; // [sp+2Ch] [bp-1Ch]@1

  v14 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 116);
  *(_DWORD *)(a1 + 408) = v14;
  *(_DWORD *)v14 = sub_6F87087C;
  *(_DWORD *)(v14 + 8) = sub_6F870C2C;
  *(_DWORD *)(v14 + 112) = 0;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 196);
    if ( *(_DWORD *)(a1 + 36) > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v2 + 12);
        v13 = *(_BYTE *)(a1 + 201) ? 3 * v7 : *(_DWORD *)(v2 + 12);
        v4 = *(int (__cdecl **)(int, signed int, signed int, int, int, int))(*(_DWORD *)(a1 + 4) + 20);
        v5 = sub_6F868CD8(*(_DWORD *)(v2 + 32), v7);
        v6 = sub_6F868CD8(*(_DWORD *)(v2 + 28), *(_DWORD *)(v2 + 8));
        *(_DWORD *)(v14 + 4 * v3++ + 72) = v4(a1, 1, 1, v6, v5, v13);
        if ( *(_DWORD *)(a1 + 36) <= v3 )
          break;
        v2 += 88;
      }
    }
    *(_DWORD *)(v14 + 4) = sub_6F87089C;
    *(_DWORD *)(v14 + 12) = sub_6F870A80;
    result = v14 + 72;
    *(_DWORD *)(v14 + 16) = v14 + 72;
  }
  else
  {
    v9 = (*(int (__cdecl **)(int, signed int, signed int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, 1280);
    v10 = (void *)v9;
    v11 = v14;
    v12 = v9 + 1280;
    do
    {
      *(_DWORD *)(v11 + 32) = v9;
      v9 += 128;
      v11 += 4;
    }
    while ( v9 != v12 );
    if ( !*(_DWORD *)(a1 + 392) )
      memset(v10, 0, 0x500u);
    result = v14;
    *(_DWORD *)(v14 + 4) = sub_6F870894;
    *(_DWORD *)(v14 + 12) = sub_6F870D78;
    *(_DWORD *)(v14 + 16) = 0;
  }
  return result;
}
