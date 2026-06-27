void __cdecl sub_6F83B294(const void *a1)
{
  char v1; // [sp+18h] [bp-340h]@2

  if ( a1 )
  {
    qmemcpy(&v1, a1, 0x328u);
    memset((void *)a1, 0, 0x328u);
    sub_6F83B5A7((int)&v1, (int)a1);
    sub_6F839A69((int)&v1);
  }
}
