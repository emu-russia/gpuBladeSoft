int sub_6F75E460()
{
  int *v0; // esi@1
  int v1; // ebx@1

  v0 = &dword_7026A6A8;
  v1 = 0;
  do
  {
    if ( *v0 >= 0 )
      sub_6F75CE50(v1);
    ++v1;
    v0 += 16467;
  }
  while ( v1 != 16 );
  return 0;
}
