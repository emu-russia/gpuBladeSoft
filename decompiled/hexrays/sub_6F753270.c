void sub_6F753270()
{
  dword_6FBB5094 = 0;
  sub_6F752AF0(dword_6FBB5080, dword_6FBB5088, dword_6FBB507C, 1);
  sub_6F806910(dword_70259108);
  if ( sub_6F8301E0((int)&unk_70258FA0, (int)&dword_70258F84) )
  {
    fwrite((const void *)dword_70258F84, dword_70258F88, 1u, (FILE *)dword_70258F80);
    fwrite((const void *)dword_70258F8C, dword_70258F90, 1u, (FILE *)dword_70258F80);
  }
  fflush((FILE *)dword_70258F80);
  fclose((FILE *)dword_70258F80);
  sub_6F82FA10((int)&unk_70258FA0);
  free((void *)dword_6FBB507C);
  free((void *)dword_6FBB508C);
  sub_6F72F480("Video3 recording stopped");
}
