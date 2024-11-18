#include "mQueue.h"
#include "gtest.h"

TEST(mQueue, can_create_mQueue)
{
    ASSERT_NO_THROW(mQueue<int> q);
}

TEST(mQueue, can_check_for_empty)
{
    mQueue<int> q;

    EXPECT_EQ(1, q.isEmpty());
}

TEST(mQueue, can_check_for_full)
{
    mQueue<int> q;

    EXPECT_NE(1, q.isFull());
}

TEST(mQueue, can_return_correct_size)
{
    mQueue<int> q;

    q.push(7);
    q.push(7);
    q.push(7);
    q.push(7);
    q.push(7);

    EXPECT_EQ(5, q.size_());
}

TEST(mQueue, can_return_correct_capacity)
{
    mQueue<int> q;

    q.push(3);
    q.push(4);
    q.push(5);

    int capacity = q.size_() * 2 + 2;

    EXPECT_EQ(capacity, q.capacity_());
}

TEST(mQueue, can_push_element)
{
    mQueue<int> s;

    s.push(1);

    EXPECT_EQ(1, s.get_back());
}

TEST(mQueue, can_pop_element)
{
    mQueue<int> s;

    s.push(2);
    s.push(3);
    s.pop();

    EXPECT_EQ(1, s.size_());
}

TEST(mQueue, can_get_front_element)
{
    mQueue<int> s;

    s.push(5);
    s.push(7);

    EXPECT_EQ(5, s.get_front());
}

TEST(mQueue, can_get_back_element)
{
    mQueue<int> s;

    s.push(9);
    s.push(4);

    EXPECT_EQ(4, s.get_back());
}