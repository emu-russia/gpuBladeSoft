signed int __cdecl sub_6F88F350(int a1)
{
  signed int v1; // esi@1
  int v2; // ebx@2
  int v3; // ecx@2
  _WORD *v4; // eax@2
  int v5; // eax@2
  int v6; // edx@2
  __int16 *v7; // eax@2
  int v8; // ecx@2
  int v9; // edx@2
  int v10; // edx@2
  int v11; // eax@2

  v1 = sub_6F88F270(a1);
  if ( !v1 )
  {
    v2 = *(_DWORD *)(a1 + 28);
    v3 = *(_DWORD *)(v2 + 76);
    *(_DWORD *)(v2 + 60) = 2 * *(_DWORD *)(v2 + 44);
    v4 = *(_WORD **)(v2 + 68);
    v4[v3 + 0x7FFFFFFF] = 0;
    memset(v4, 0, 2 * (v3 + 0x7FFFFFFF));
    v5 = *(_DWORD *)(v2 + 132);
    *(_DWORD *)(v2 + 108) = 0;
    *(_DWORD *)(v2 + 92) = 0;
    *(_DWORD *)(v2 + 116) = 0;
    v6 = 6 * v5;
    v7 = &word_6FBA11A0[6 * v5];
    v8 = (unsigned __int16)word_6FBA11A2[v6];
    v9 = (unsigned __int16)word_6FBA11A0[v6];
    *(_DWORD *)(v2 + 5812) = 0;
    *(_DWORD *)(v2 + 120) = 2;
    *(_DWORD *)(v2 + 128) = v8;
    *(_DWORD *)(v2 + 140) = v9;
    v10 = (unsigned __int16)v7[2];
    v11 = (unsigned __int16)v7[3];
    *(_DWORD *)(v2 + 96) = 2;
    *(_DWORD *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 144) = v10;
    *(_DWORD *)(v2 + 124) = v11;
    *(_DWORD *)(v2 + 72) = 0;
  }
  return v1;
}
