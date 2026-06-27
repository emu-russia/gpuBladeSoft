_DWORD *sub_6F962260()
{
  _DWORD *v0; // esi@1
  _DWORD *v2; // eax@4
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@3
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v6; // [sp+38h] [bp-24h]@1

  v0 = &unk_6FB48C40;
  v5 = sub_6F962A50;
  v6 = &dword_6F96CB4C;
  sub_6F8A1A60((int *)&v3);
  if ( byte_6FB48C4C )
  {
    v4 = 0;
    v0 = (_DWORD *)sub_6F8B48C0(dword_6FB48C48);
    if ( !v0 )
    {
      v2 = malloc(8u);
      v0 = v2;
      if ( !v2 || (v4 = 0, sub_6F8B4920(dword_6FB48C48, (int)v2)) )
        sub_6F95D3C0();
      *v0 = 0;
      v0[1] = 0;
    }
  }
  sub_6F8A1AD0((int *)&v3);
  return v0;
}
