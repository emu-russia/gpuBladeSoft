int __cdecl sub_6F855BF4(_DWORD *a1)
{
  void *v2; // [sp+14h] [bp-14h]@2
  char *v3; // [sp+18h] [bp-10h]@1
  void *v4; // [sp+1Ch] [bp-Ch]@3

  v3 = sub_6F85475E((int)"1.6.6", (int)a1, (int)sub_6F839C23, (int)sub_6F839CF7);
  if ( v3 )
  {
    v2 = sub_6F83400D((int)v3);
    if ( v2 )
    {
      v4 = sub_6F83B561((int)v3, 0x18u);
      if ( v4 )
      {
        memset(v4, 0, 0x18u);
        *(_DWORD *)v4 = v3;
        *((_DWORD *)v4 + 1) = v2;
        *((_BYTE *)v4 + 20) |= 1u;
        *a1 = v4;
        return 1;
      }
      sub_6F83405C((int)v3, &v2);
    }
    sub_6F854EC7((const void **)&v3, 0);
  }
  return sub_6F838FC6((int)a1, (int)"png_image_write_: out of memory");
}
