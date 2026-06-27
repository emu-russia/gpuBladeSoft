int __cdecl sub_6F83CDC3(int a1)
{
  int result; // eax@5
  void *v2; // [sp+14h] [bp-14h]@3
  char *v3; // [sp+18h] [bp-10h]@2
  void *v4; // [sp+1Ch] [bp-Ch]@4

  if ( *(_DWORD *)a1 )
  {
    result = sub_6F838FC6(a1, (int)"png_image_read: opaque pointer not NULL");
  }
  else
  {
    v3 = sub_6F83B664((int)"1.6.6", a1, (int)sub_6F839C23, (int)sub_6F839CF7);
    memset((void *)a1, 0, 0x60u);
    *(_DWORD *)(a1 + 4) = 1;
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
          *((_BYTE *)v4 + 20) &= 0xFEu;
          *(_DWORD *)a1 = v4;
          return 1;
        }
        sub_6F83405C((int)v3, &v2);
      }
      sub_6F83CA1A((const void **)&v3, 0, 0);
    }
    result = sub_6F838FC6(a1, (int)"png_image_read: out of memory");
  }
  return result;
}
