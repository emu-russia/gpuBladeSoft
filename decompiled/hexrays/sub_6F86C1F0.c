int __cdecl sub_6F86C1F0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // eax@1
  int v8; // edi@1
  int result; // eax@1
  int v10; // ebx@2
  double v11; // st7@2
  float v12; // ST10_4@3
  int v13; // eax@3
  void (__cdecl *v14)(char *, int, int); // [sp+1Ch] [bp-12Ch]@1
  unsigned int v15; // [sp+24h] [bp-124h]@2
  char v16[280]; // [sp+30h] [bp-118h]@3

  v7 = *(_DWORD *)(a1 + 400);
  v14 = *(void (__cdecl **)(char *, int, int))(v7 + 4 * *(_DWORD *)(a2 + 4) + 100);
  v8 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(a2 + 16) + 140);
  result = a3 + 4 * a5;
  if ( a7 )
  {
    v10 = a4;
    v15 = 0;
    v11 = 16384.5;
    while ( 1 )
    {
      v12 = v11;
      v14(v16, a3 + 4 * a5, a6);
      v13 = 0;
      v11 = v12;
      do
      {
        *(_WORD *)(v10 + 2 * v13) = (signed int)(*(float *)&v16[4 * v13] * *(float *)(v8 + 4 * v13) + v11) - 0x4000;
        ++v13;
      }
      while ( v13 != 64 );
      ++v15;
      result = *(_DWORD *)(a2 + 36);
      v10 += 128;
      if ( a7 <= v15 )
        break;
      a6 += result;
    }
  }
  return result;
}
