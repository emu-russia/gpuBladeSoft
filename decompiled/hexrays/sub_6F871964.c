int __usercall sub_6F871964@<eax>(int a1@<eax>)
{
  int v1; // esi@1
  int v2; // ebx@1
  int v3; // eax@1
  signed int v4; // esi@1
  signed int v5; // ebx@1
  signed int v6; // ecx@1
  int result; // eax@1
  signed int v8; // [sp+1Ch] [bp-3Ch]@1
  int v9; // [sp+30h] [bp-28h]@1
  int v10; // [sp+34h] [bp-24h]@1
  int v11; // [sp+38h] [bp-20h]@1
  int v12; // [sp+3Ch] [bp-1Ch]@1

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 436);
  *(_DWORD *)(v2 + 8) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1024);
  *(_DWORD *)(v2 + 12) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(v1 + 4))(v1, 1, 1024);
  *(_DWORD *)(v2 + 16) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(v1 + 4))(v1, 1, 1024);
  v3 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(v1 + 4))(v1, 1, 1024);
  v12 = v3;
  *(_DWORD *)(v2 + 20) = v3;
  v11 = *(_DWORD *)(v2 + 8);
  v10 = *(_DWORD *)(v2 + 12);
  v9 = *(_DWORD *)(v2 + 16);
  v4 = 2919680;
  v5 = 5990656;
  v6 = -14831872;
  result = 0;
  v8 = -11728000;
  do
  {
    *(_DWORD *)(v11 + 4 * result) = v8 >> 16;
    *(_DWORD *)(v10 + 4 * result) = v6 >> 16;
    *(_DWORD *)(v9 + 4 * result) = v5;
    *(_DWORD *)(v12 + 4 * result++) = v4;
    v8 += 91881;
    v6 += 116130;
    v5 -= 46802;
    v4 -= 22554;
  }
  while ( result != 256 );
  return result;
}
