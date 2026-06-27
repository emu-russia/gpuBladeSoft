int __cdecl sub_6F83BC44(int a1)
{
  int result; // eax@3

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 120) & 0x40 )
      result = sub_6F8395F1(a1, "png_start_read_image/png_read_update_info: duplicate call");
    else
      result = sub_6F85007F(a1);
  }
  return result;
}
