int __cdecl sub_6F86BA1C(int a1)
{
  int v1; // ebx@1
  int result; // eax@1
  int v3; // edi@1
  int v4; // esi@1
  signed int v5; // ebx@1
  int v6; // edx@1
  int v7; // [sp+1Ch] [bp-2Ch]@1
  int v8; // [sp+24h] [bp-24h]@1
  signed int v9; // [sp+28h] [bp-20h]@1
  int v10; // [sp+2Ch] [bp-1Ch]@1

  v1 = *(_DWORD *)(a1 + 392);
  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 0x2000);
  *(_DWORD *)(v1 + 8) = result;
  v3 = 0;
  v4 = 0;
  v5 = 8421375;
  v10 = 0;
  v9 = 0x8000;
  v8 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    *(_DWORD *)result = v6;
    *(_DWORD *)(result + 1024) = v8;
    *(_DWORD *)(result + 2048) = v9;
    *(_DWORD *)(result + 3072) = v10;
    *(_DWORD *)(result + 4096) = v7;
    *(_DWORD *)(result + 5120) = v5;
    *(_DWORD *)(result + 6144) = v4;
    *(_DWORD *)(result + 7168) = v3;
    v6 += 19595;
    result += 4;
    v8 += 38470;
    v9 += 7471;
    v10 -= 11059;
    v7 -= 21709;
    v5 += 0x8000;
    v4 -= 27439;
    v3 -= 5329;
  }
  while ( v6 != 5016320 );
  return result;
}
