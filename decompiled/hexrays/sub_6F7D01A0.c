void __cdecl sub_6F7D01A0(int a1)
{
  int v1; // ebx@1
  int v2; // eax@2
  int v3; // edi@2
  int v4; // eax@2
  int v5; // [sp+1Ch] [bp-20h]@2

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    v2 = *(_DWORD *)(a1 + 28);
    v3 = *(_DWORD *)(v1 + 180);
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    v5 = v2;
    v4 = *(_DWORD *)(v1 + 100);
    *(_BYTE *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 104) = 0;
    *(_DWORD *)(v1 + 64) = 9;
    *(_DWORD *)(v1 + 12) = 0;
    if ( v4 != v1 + 112 )
    {
      sub_6F773D90(v3, v4);
      *(_DWORD *)(v1 + 100) = 0;
    }
    sub_6F773D90(v3, *(_DWORD *)(v1 + 88));
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)(v1 + 180) = 0;
    memset((void *)((v1 + 16) & 0xFFFFFFFC), 0, 4 * ((v1 + 12 - ((v1 + 16) & 0xFFFFFFFC) + 172) >> 2));
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    sub_6F773D90(v5, v1);
    *(_DWORD *)(a1 + 12) = 0;
  }
}
