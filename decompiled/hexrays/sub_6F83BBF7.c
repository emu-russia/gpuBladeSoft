int __cdecl sub_6F83BBF7(int a1, int a2)
{
  int result; // eax@3

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 120) & 0x40 )
    {
      result = sub_6F8395F1(a1, "png_read_update_info/png_start_read_image: duplicate call");
    }
    else
    {
      sub_6F85007F(a1);
      result = sub_6F8446DD(a1, a2);
    }
  }
  return result;
}
