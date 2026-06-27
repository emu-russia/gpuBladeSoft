unsigned int __stdcall sub_6F761AD0(int a1, int a2)
{
  unsigned int result; // eax@1
  int *v3; // eax@2
  int v4; // edx@2
  int v5; // [sp+18h] [bp-24h]@2
  int v6; // [sp+1Ch] [bp-20h]@2
  int v7; // [sp+20h] [bp-1Ch]@2
  int v8; // [sp+24h] [bp-18h]@2
  int v9; // [sp+28h] [bp-14h]@2
  int v10; // [sp+2Ch] [bp-10h]@2

  result = 1;
  if ( *(_DWORD *)(a1 + 24) & 3 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    v5 = 24;
    v6 = 16;
    v3 = (int *)dword_7036E7C4[50 * dword_7036F380];
    v8 = 2;
    v9 = -127;
    v4 = *v3;
    v10 = 127;
    result = (unsigned int)~(*(int (__stdcall **)(int *, signed int, int *))(v4 + 24))(v3, 4, &v5) >> 31;
  }
  return result;
}
