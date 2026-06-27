void sub_6F753BD0()
{
  dword_6FBB5078 = 0;
  sub_6F753450(dword_6FBB506C, dword_6FBB5070, dword_6FBB5060, 1);
  sub_6F806910(dword_70258F08);
  if ( sub_6F8301E0((int)&unk_70258DA0, (int)&dword_70258D84) )
  {
    fwrite((const void *)dword_70258D84, dword_70258D88, 1u, (FILE *)dword_70258D80);
    fwrite((const void *)dword_70258D8C, dword_70258D90, 1u, (FILE *)dword_70258D80);
  }
  fflush((FILE *)dword_70258D80);
  fclose((FILE *)dword_70258D80);
  sub_6F82FA10((int)&unk_70258DA0);
  free((void *)dword_6FBB5060);
  free((void *)dword_6FBB5064);
  sub_6F72F480("Video2 recording stopped");
}
