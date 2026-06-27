char __cdecl sub_6F864F74(int a1, int a2)
{
  signed int v2; // eax@1
  int v3; // edx@1
  signed int v4; // ST18_4@1
  signed int v5; // eax@1
  int v6; // edx@2
  int v7; // edx@9
  int v9; // edx@10

  v2 = *(_DWORD *)(a1 + 396);
  v3 = *(_DWORD *)a1;
  *(_DWORD *)(v3 + 20) = 124;
  *(_DWORD *)(v3 + 24) = v2;
  *(_DWORD *)(*(_DWORD *)a1 + 28) = a2;
  v4 = v2;
  (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, -1);
  v5 = v4;
  if ( v4 > 191 )
    goto LABEL_4;
  while ( 1 )
  {
    v6 = *(_DWORD *)a1;
    *(_DWORD *)(v6 + 20) = 99;
    *(_DWORD *)(v6 + 24) = v5;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = 2;
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 4);
    if ( !sub_6F863BD4(a1) )
      break;
    v5 = *(_DWORD *)(a1 + 396);
    if ( v5 > 191 )
    {
LABEL_4:
      if ( (unsigned int)(v5 - 208) > 7 || (((_BYTE)a2 + 1) & 7) + 208 == v5 || (((_BYTE)a2 + 2) & 7) + 208 == v5 )
      {
        v9 = *(_DWORD *)a1;
        *(_DWORD *)(v9 + 20) = 99;
        *(_DWORD *)(v9 + 24) = v5;
        *(_DWORD *)(*(_DWORD *)a1 + 28) = 3;
        (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 4);
        return 1;
      }
      if ( (((_BYTE)a2 - 1) & 7) + 208 != v5 && (((_BYTE)a2 - 2) & 7) + 208 != v5 )
      {
        v7 = *(_DWORD *)a1;
        *(_DWORD *)(v7 + 20) = 99;
        *(_DWORD *)(v7 + 24) = v5;
        *(_DWORD *)(*(_DWORD *)a1 + 28) = 1;
        (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 4);
        *(_DWORD *)(a1 + 396) = 0;
        return 1;
      }
    }
  }
  return 0;
}
