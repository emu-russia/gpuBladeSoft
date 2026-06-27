int __cdecl sub_6F865F5C(int a1)
{
  int v1; // eax@1
  int v2; // ebx@1
  int v3; // eax@1
  int v4; // ebx@3
  int v5; // eax@3
  signed int v6; // esi@3
  signed int v7; // ebx@3
  signed int v8; // ecx@3
  int result; // eax@3
  signed int v10; // [sp+1Ch] [bp-3Ch]@3
  int v11; // [sp+30h] [bp-28h]@3
  int v12; // [sp+34h] [bp-24h]@3
  int v13; // [sp+38h] [bp-20h]@3
  int v14; // [sp+3Ch] [bp-1Ch]@3

  v1 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 48);
  v2 = v1;
  *(_DWORD *)(a1 + 432) = v1;
  *(_DWORD *)v1 = sub_6F865A70;
  *(_BYTE *)(v1 + 8) = 0;
  v3 = *(_DWORD *)(a1 + 92) * *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v2 + 40) = v3;
  if ( *(_DWORD *)(a1 + 276) == 2 )
  {
    *(_DWORD *)(v2 + 4) = sub_6F865E80;
    *(_DWORD *)(v2 + 12) = sub_6F865C54;
    *(_DWORD *)(v2 + 32) = (*(int (__cdecl **)(int, signed int, int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, v3);
  }
  else
  {
    *(_DWORD *)(v2 + 4) = sub_6F865A88;
    *(_DWORD *)(v2 + 12) = sub_6F865ACC;
    *(_DWORD *)(v2 + 32) = 0;
  }
  v4 = *(_DWORD *)(a1 + 432);
  *(_DWORD *)(v4 + 16) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1024);
  *(_DWORD *)(v4 + 20) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1024);
  *(_DWORD *)(v4 + 24) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1024);
  v5 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1024);
  v14 = v5;
  *(_DWORD *)(v4 + 28) = v5;
  v13 = *(_DWORD *)(v4 + 16);
  v12 = *(_DWORD *)(v4 + 20);
  v11 = *(_DWORD *)(v4 + 24);
  v6 = 2919680;
  v7 = 5990656;
  v8 = -14831872;
  result = 0;
  v10 = -11728000;
  do
  {
    *(_DWORD *)(v13 + 4 * result) = v10 >> 16;
    *(_DWORD *)(v12 + 4 * result) = v8 >> 16;
    *(_DWORD *)(v11 + 4 * result) = v7;
    *(_DWORD *)(v14 + 4 * result++) = v6;
    v10 += 91881;
    v8 += 116130;
    v7 -= 46802;
    v6 -= 22554;
  }
  while ( result != 256 );
  return result;
}
